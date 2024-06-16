#include <iostream>
#include <vector>

using namespace std;

vector<double> solveSystem() {
    // Коэффициенты системы уравнений
    vector<double> A = {7, 0, 0, 0, 0}; // коэффициенты x
    vector<double> B = {-5, 19, -18, -7, 0}; // коэффициенты y, z, t, v
    vector<double> C = {0, -9, 6, -11, 5}; // коэффициенты x, y, z, t, v
    vector<double> D = {38, 14, -45, 30, 48}; // свободные члены

    int n = D.size();

    // Прямой проход метода прогонки
    for (int i = 1; i < n; ++i) {
        double m = A[i] / B[i - 1];
        B[i] -= m * C[i - 1];
        D[i] -= m * D[i - 1];
    }

    // Обратный проход метода прогонки
    vector<double> x(n);
    x[n - 1] = D[n - 1] / B[n - 1];
    for (int i = n - 2; i >= 0; --i) {
        x[i] = (D[i] - C[i] * x[i + 1]) / B[i];
    }

    return x;
}

int main() {
    vector<double> solution = solveSystem();

    cout << "Solution:" << endl;
    cout << "x = " << solution[0] << endl;
    cout << "y = " << solution[1] << endl;
    cout << "z = " << solution[2] << endl;
    cout << "t = " << solution[3] << endl;
    cout << "v = " << solution[4] << endl;

    return 0;
}




