#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления нового значения переменной x по методу Зейделя
double computeX(double y, double z, double t) {
    return (-130 + 6*y - 4*z - 7*t) / 24.0;
}

// Функция для вычисления нового значения переменной y по методу Зейделя
double computeY(double x, double z, double t) {
    return (-139 + 8*x - 4*z + 2*t) / 21.0;
}

// Функция для вычисления нового значения переменной z по методу Зейделя
double computeZ(double x, double y, double t) {
    return (84 - 6*x - 6*y) / 16.0;
}

// Функция для вычисления нового значения переменной t по методу Зейделя
double computeT(double x, double y, double z) {
    return (-165 + 7*x + 7*y - 5*z) / 24.0;
}

int main() {
    // Начальные приближения
    double x = 0.0, y = 0.0, z = 0.0, t = 0.0;
    double prevX, prevY, prevZ, prevT;
    
    // Точность
    double epsilon = 0.01;
    
    do {
        // Сохраняем предыдущие значения
        prevX = x;
        prevY = y;
        prevZ = z;
        prevT = t;
        
        // Вычисляем новые значения по методу Зейделя
        x = computeX(y, z, t);
        y = computeY(x, z, t);
        z = computeZ(x, y, t);
        t = computeT(x, y, z);
        
        // Вывод текущих значений (можно закомментировать, если не нужен вывод промежуточных значений)
        cout << "x = " << x << ", y = " << y << ", z = " << z << ", t = " << t << endl;
        
    } while (fabs(x - prevX) > epsilon || fabs(y - prevY) > epsilon || fabs(z - prevZ) > epsilon || fabs(t - prevT) > epsilon);
    
    // Вывод окончательных значений
    cout << "Final values: " << endl;
    cout << "x = " << x << ", y = " << y << ", z = " << z << ", t = " << t << endl;
    
    return 0;
}



