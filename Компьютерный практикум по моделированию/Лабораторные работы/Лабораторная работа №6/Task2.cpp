#include <iostream>
#include <cmath>

using namespace std;

// Функция f(x, y) = x^2 + exp(x^2 + y^2) + 4x + 3y
double f(double x, double y) {
    return x*x + exp(x*x + y*y) + 4*x + 3*y;
}

// Градиент функции f(x, y)
void gradient(double x, double y, double& grad_x, double& grad_y) {
    // df/dx = 2x + 2x * exp(x^2 + y^2) + 4
    grad_x = 2*x + 2*x * exp(x*x + y*y) + 4;
    
    // df/dy = 2y * exp(x^2 + y^2) + 3
    grad_y = 2*y * exp(x*x + y*y) + 3;
}

// Метод наискорейшего спуска для поиска минимума функции
void gradientDescent(double x0, double y0, double learning_rate, int max_iter) {
    double x = x0;
    double y = y0;
    double grad_x, grad_y;

    for (int iter = 0; iter < max_iter; ++iter) {
        // Вычисляем градиент функции в текущей точке
        gradient(x, y, grad_x, grad_y);
        
        // Выполняем шаг градиентного спуска
        x = x - learning_rate * grad_x;
        y = y - learning_rate * grad_y;
        
        // Выводим текущие значения x, y и f(x, y)
        cout << "Iter " << iter + 1 << ": x = " << x << ", y = " << y << ", f(x, y) = " << f(x, y) << endl;
    }

    cout << "Optimal solution: x = " << x << ", y = " << y << ", f(x, y) = " << f(x, y) << endl;
}

int main() {
    double x0 = 1.0; // Начальная точка x
    double y0 = -1.0; // Начальная точка y
    double learning_rate = 0.1; // Скорость обучения (learning rate)
    int max_iter = 100; // Максимальное количество итераций

    // Запускаем метод наискорейшего спуска
    gradientDescent(x0, y0, learning_rate, max_iter);

    return 0;
}

