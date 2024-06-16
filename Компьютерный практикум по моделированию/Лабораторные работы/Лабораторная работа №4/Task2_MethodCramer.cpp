#include <iostream>
#include <Eigen/Dense>

using namespace Eigen;
using namespace std;

int main() {
    Matrix3f A;
    Vector3f b;
    
    // Заполнение матрицы A и вектора b (коэффициенты системы и свободные члены)
    A << 0, 2, 2,
         5, -2, 5,
         2, 2, 5;
    b << -1, 2, 0;
    
    // Вычисление определителя матрицы A
    float det_A = A.determinant();
    
    if (det_A == 0) {
        cout << "Определитель матрицы A равен нулю. Метод Крамера не применим." << endl;
        return 1;
    }
    
    // Вычисление определителей для каждого неизвестного
    Matrix3f A1 = A;
    A1.col(0) = b;
    float det_A1 = A1.determinant();
    
    Matrix3f A2 = A;
    A2.col(1) = b;
    float det_A2 = A2.determinant();
    
    Matrix3f A3 = A;
    A3.col(2) = b;
    float det_A3 = A3.determinant();
    
    // Вычисление решений по формулам Крамера
    float x = det_A1 / det_A;
    float y = det_A2 / det_A;
    float z = det_A3 / det_A;
    
    // Вывод решений
    cout << "Решение методом Крамера:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    
    return 0;
}



