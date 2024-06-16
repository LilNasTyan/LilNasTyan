#include <iostream>
#include <vector>

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

// Функция для вычисления определителя матрицы 4x4
double determinant4x4(const vector<vector<double>>& matrix) {
    double det = 0;
    int n = matrix.size();
    
    if (n != 4) {
        cerr << "Error: Matrix is not 4x4!" << endl;
        return 0;
    }
    
    det = matrix[0][0] * (matrix[1][1] * (matrix[2][2] * matrix[3][3] - matrix[2][3] * matrix[3][2])
                         - matrix[1][2] * (matrix[2][1] * matrix[3][3] - matrix[2][3] * matrix[3][1])
                         + matrix[1][3] * (matrix[2][1] * matrix[3][2] - matrix[2][2] * matrix[3][1]));
    
    det -= matrix[0][1] * (matrix[1][0] * (matrix[2][2] * matrix[3][3] - matrix[2][3] * matrix[3][2])
                         - matrix[1][2] * (matrix[2][0] * matrix[3][3] - matrix[2][3] * matrix[3][0])
                         + matrix[1][3] * (matrix[2][0] * matrix[3][2] - matrix[2][2] * matrix[3][0]));
    
    det += matrix[0][2] * (matrix[1][0] * (matrix[2][1] * matrix[3][3] - matrix[2][3] * matrix[3][1])
                         - matrix[1][1] * (matrix[2][0] * matrix[3][3] - matrix[2][3] * matrix[3][0])
                         + matrix[1][3] * (matrix[2][0] * matrix[3][1] - matrix[2][1] * matrix[3][0]));
    
    det -= matrix[0][3] * (matrix[1][0] * (matrix[2][1] * matrix[3][2] - matrix[2][2] * matrix[3][1])
                         - matrix[1][1] * (matrix[2][0] * matrix[3][2] - matrix[2][2] * matrix[3][0])
                         + matrix[1][2] * (matrix[2][0] * matrix[3][1] - matrix[2][1] * matrix[3][0]));
    
    return det;
}

// Матричный метод (метод Крамера) для решения СЛАУ
vector<double> solveMatrixMethod(const vector<vector<double>>& A, const vector<double>& b) {
    int n = A.size();
    vector<double> x(n);
    
    // Вычисление определителя матрицы A
    double detA = determinant4x4(A); // для матрицы 4x4
    
    // Проверка, что detA != 0
    if (detA == 0) {
        cerr << "Error: Determinant of matrix A is zero. No unique solution exists." << endl;
        return x; // Возвращаем пустой вектор как признак ошибки
    }
    
    // Вычисление x[i] как определитель матрицы, где i-й столбец заменен на b
    for (int i = 0; i < n; ++i) {
        vector<vector<double>> Ai = A;
        for (int j = 0; j < n; ++j) {
            Ai[j][i] = b[j];
        }
        x[i] = determinant4x4(Ai) / detA; // для матрицы 4x4
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
    
    // Решение матричным методом (методом Крамера)
    vector<double> solution = solveMatrixMethod(A, b);
    
    // Вывод решения
    cout << "Solution by matrix method (Cramer's rule):" << endl;
    for (size_t i = 0; i < solution.size(); ++i) {
        cout << "x[" << i << "] = " << solution[i] << endl;
    }
    
    return 0;
}


