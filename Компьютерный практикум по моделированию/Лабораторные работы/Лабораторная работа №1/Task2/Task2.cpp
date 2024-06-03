#include <iostream>
#include <cmath>
#include <functional>
using namespace std;

// Точность решения
const double epsilon = 1e-6;

// Функция
double f(double x) {
    return x * exp(x) - x - 1;
}

// Производная функции
double df(double x) {
    return exp(x) * (x + 1) - 1;
}

// Метод дихотомии (бисекции)
double bisection(double a, double b) {
    double c;
    while ((b - a) / 2.0 > epsilon) {
        c = (a + b) / 2.0;
        if (f(c) == 0.0)
            break;
        if ((f(a) * f(c)) < 0)
            b = c;
        else
            a = c;
    }
    return c;
}

// Метод хорд
double secant(double x0, double x1) {
    double x2;
    while (fabs(x1 - x0) > epsilon) {
        x2 = x1 - f(x1) * (x1 - x0) / (f(x1) - f(x0));
        x0 = x1;
        x1 = x2;
    }
    return x1;
}

// Метод Ньютона
double newton(double x0) {
    double x1;
    while (true) {
        x1 = x0 - f(x0) / df(x0);
        if (fabs(x1 - x0) < epsilon)
            break;
        x0 = x1;
    }
    return x1;
}

// Метод простых итераций
double iteration(double x0) {
    double x1;
    while (true) {
        x1 = exp(-x0) + 1;
        if (fabs(x1 - x0) < epsilon)
            break;
        x0 = x1;
    }
    return x1;
}

int main() {
    double a = 0.0, b = 2.0; // Интервал для метода дихотомии

    cout << "Method of Bisection: " << bisection(a, b) << endl;
    cout << "Method of Secant: " << secant(a, b) << endl;
    cout << "Method of Newton: " << newton(b) << endl;
    cout << "Method of Iteration: " << iteration(0.5) << endl;

    return 0;
}
