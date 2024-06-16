#include <iostream>
#include <cmath>
#include <iomanip>

// Функция для интегрирования
double f(double x) {
    return exp(-2 * x) * sin(6 * x);
}

// Метод прямоугольников
double rectangleMethod(double a, double b, int n) {
    double h = (b - a) / n;
    double result = 0.0;
    for (int i = 0; i < n; ++i) {
        result += f(a + i * h);
    }
    result *= h;
    return result;
}

// Метод трапеций
double trapezoidalMethod(double a, double b, int n) {
    double h = (b - a) / n;
    double result = (f(a) + f(b)) / 2.0;
    for (int i = 1; i < n; ++i) {
        result += f(a + i * h);
    }
    result *= h;
    return result;
}

// Метод Симпсона
double simpsonsMethod(double a, double b, int n) {
    if (n % 2 != 0) n++; // n должен быть четным для метода Симпсона
    double h = (b - a) / n;
    double result = f(a) + f(b);
    for (int i = 1; i < n; i += 2) {
        result += 4 * f(a + i * h);
    }
    for (int i = 2; i < n - 1; i += 2) {
        result += 2 * f(a + i * h);
    }
    result *= h / 3.0;
    return result;
}

int main() {
    double a = 0.0;
    double b = 10.0; // Используем большое значение вместо бесконечности
    int n = 1000; // Начальное число разбиений

    // Устанавливаем точность
    const double epsilon = 1e-6;
    double result;

    // Метод прямоугольников
    do {
        result = rectangleMethod(a, b, n);
        n *= 2;
    } while (std::abs(rectangleMethod(a, b, n) - result) > epsilon);
    std::cout << "Rectangle method: " << std::setprecision(7) << result << std::endl;

    n = 1000; // Сбросить n

    // Метод трапеций
    do {
        result = trapezoidalMethod(a, b, n);
        n *= 2;
    } while (std::abs(trapezoidalMethod(a, b, n) - result) > epsilon);
    std::cout << "Trapezoidal method: " << std::setprecision(7) << result << std::endl;

    n = 1000; // Сбросить n

    // Метод Симпсона
    do {
        result = simpsonsMethod(a, b, n);
        n *= 2;
    } while (std::abs(simpsonsMethod(a, b, n) - result) > epsilon);
    std::cout << "Simpson's method: " << std::setprecision(7) << result << std::endl;

    return 0;
}
