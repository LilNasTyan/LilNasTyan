#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

// Функция для печати матрицы
void printMatrix(const vector<vector<double>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Функция для вывода решения
void printSolution(const vector<double>& solution) {
    int n = solution.size();
    for (int i = 0; i < n; ++i) {
        cout << "x[" << i << "] = " << solution[i] << endl;
    }
}

// Метод Гаусса для решения СЛАУ
vector<double> solveGauss(vector<vector<double>>& A, vector<double>& b) {
    int n = A.size();
    
    // Прямой ход метода Гаусса
    for (int i = 0; i < n; ++i) {
        // Поиск максимального элемента в столбце i (под i-м элементом)
        int maxRow = i;
        for (int k = i + 1; k < n; ++k) {
            if (abs(A[k][i]) > abs(A[maxRow][i])) {
                maxRow = k;
            }
        }
        
        // Поменять строки местами
        swap(A[i], A[maxRow]);
        swap(b[i], b[maxRow]);
        
        // Обнуление под i-м элементом в столбце i
        for (int k = i + 1; k < n; ++k) {
            double coef = -A[k][i] / A[i][i];
            for (int j = i; j < n; ++j) {
                A[k][j] += coef * A[i][j];
            }
            b[k] += coef * b[i];
        }
    }
    
    // Обратный ход метода Гаусса
    vector<double> x(n);
    for (int i = n - 1; i >= 0; --i) {
        x[i] = b[i];
        for (int j = i + 1; j < n; ++j) {
            x[i] -= A[i][j] * x[j];
        }
        x[i] /= A[i][i];
    }
    
    return x;
}

int main() {
    // Исходная система уравнений:
    vector<vector<double>> A = {{2, -7, 8, -4},
                                {0, -1, 4, -1},
                                {3, -4, 2, -1},
                                {-9, 1, -4, 46}};
                                
    vector<double> b = {57, 24, 28, 12};
    
    // Решение методом Гаусса
    vector<double> solution = solveGauss(A, b);
    
    // Вывод решения
    cout << "Solution by Gauss method:" << endl;
    printSolution(solution);
    
    return 0;
}


