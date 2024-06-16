#include <iostream>
#include <Eigen/Dense>  // подключаем библиотеку Eigen для работы с матрицами и векторами

using namespace std;
using namespace Eigen;

// Функция для решения методом наименьших квадратов и нахождения коэффициентов многочлена
VectorXf solveLeastSquares(const MatrixXf& A, const VectorXf& b) {
    return A.colPivHouseholderQr().solve(b);
}

int main() {
    // Данные из таблицы
    VectorXd x(6);  // x значения
    VectorXd y(6);  // y значения

    // Заполнение данных из таблицы
    x << -1.0, 0.0, 1.0, 2.0, 3.0, 4.0;
    y << -0.5, 0.0, 0.5, 0.86603, 1.0, 0.86603;

    // Построение матрицы A для многочлена первой степени (A * c = y)
    MatrixXf A1(x.size(), 2);
    VectorXf y_vector1(x.size());
    for (int i = 0; i < x.size(); ++i) {
        A1(i, 0) = 1.0;   // столбец для свободного члена
        A1(i, 1) = x(i);  // столбец для x
        y_vector1(i) = y(i);  // вектор значений y
    }

    // Находим коэффициенты многочлена первой степени (c1 = [c0, c1]^T)
    VectorXf c1 = solveLeastSquares(A1, y_vector1);

    // Вывод коэффициентов многочлена первой степени
    cout << "Коэффициенты многочлена первой степени: " << endl;
    cout << "c0 = " << c1(0) << ", c1 = " << c1(1) << endl;

    // Построение матрицы A для многочлена второй степени (A * c = y)
    MatrixXf A2(x.size(), 3);
    VectorXf y_vector2(x.size());
    for (int i = 0; i < x.size(); ++i) {
        A2(i, 0) = 1.0;        // столбец для свободного члена
        A2(i, 1) = x(i);       // столбец для x
        A2(i, 2) = x(i) * x(i);  // столбец для x^2
        y_vector2(i) = y(i);   // вектор значений y
    }

    // Находим коэффициенты многочлена второй степени (c2 = [c0, c1, c2]^T)
    VectorXf c2 = solveLeastSquares(A2, y_vector2);

    // Вывод коэффициентов многочлена второй степени
    cout << "Коэффициенты многочлена второй степени: " << endl;
    cout << "c0 = " << c2(0) << ", c1 = " << c2(1) << ", c2 = " << c2(2) << endl;

    return 0;
}

    # Обратный проход метода прогонки
    x = np.zeros(n, dtype=float)
    x[n-1] = D[n-1] / A[n-1][n-1]
    
    for i in range(n-2, -1, -1):
        x[i] = (D[i] - np.dot(A[i][i+1:], x[i+1:])) / A[i][i]
    
    return x

# Решение системы
solution = solve_system()

# Вывод результатов
print("Solution:")
print(f"x = {solution[0]}")
print(f"y = {solution[1]}")
print(f"z = {solution[2]}")
print(f"t = {solution[3]}")
print(f"v = {solution[4]}")




