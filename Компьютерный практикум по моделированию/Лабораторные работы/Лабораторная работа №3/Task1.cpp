#include <iostream>
#include <cmath>
#include <iomanip>

// Определение функции для интегрирования
double f(double x) {
    return pow(x, 4) * pow((6 + x * x), -1);
}

// Метод прямоугольников
double rectangleMethod(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.0;
    for (int i = 0; i < n; ++i) {
        sum += f(a + i * h);
    }
    return sum * h;
}

// Метод трапеций
double trapezoidalMethod(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; ++i) {
        sum += f(a + i * h);
    }
    return sum * h;
}

// Метод Симпсона
double simpsonsMethod(double a, double b, int n) {
    if (n % 2 != 0) n++; // Симпсон требует четного числа отрезков
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; i += 2) {
        sum += 4 * f(a + i * h);
    }
    for (int i = 2; i < n; i += 2) {
        sum += 2 * f(a + i * h);
    }
    return sum * h / 3;
}

int main() {
    double a = 1.0, b = 2.0;
    int n = 100; // Начальное число интервалов
    double precision = 1e-6;

    // Вычисление методом прямоугольников
    double rectResult = rectangleMethod(a, b, n);
    double rectPrevResult;
    do {
        rectPrevResult = rectResult;
        n *= 2;
        rectResult = rectangleMethod(a, b, n);
    } while (fabs(rectResult - rectPrevResult) > precision);

    // Вычисление методом трапеций
    n = 100;
    double trapResult = trapezoidalMethod(a, b, n);
    double trapPrevResult;
    do {
        trapPrevResult = trapResult;
        n *= 2;
        trapResult = trapezoidalMethod(a, b, n);
    } while (fabs(trapResult - trapPrevResult) > precision);

    // Вычисление методом Симпсона
    n = 100;
    double simpResult = simpsonsMethod(a, b, n);
    double simpPrevResult;
    do {
        simpPrevResult = simpResult;
        n *= 2;
        simpResult = simpsonsMethod(a, b, n);
    } while (fabs(simpResult - simpPrevResult) > precision);

    std::cout << std::fixed << std::setprecision(10);
    std::cout << "Rectangle Method Result: " << rectResult << std::endl;
    std::cout << "Trapezoidal Method Result: " << trapResult << std::endl;
    std::cout << "Simpson's Method Result: " << simpResult << std::endl;

    return 0;
}
