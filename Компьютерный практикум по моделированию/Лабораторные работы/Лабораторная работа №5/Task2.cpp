#include <iostream>
#include <cmath>
#include <boost/math/interpolators/newton_polynomial.hpp>

int main() {
    // Задаём точки (a, b), где b = cos(a)
    const double pi = 3.141592653589793;
    std::vector<double> a = {0.1 * pi, 0.2 * pi, 0.3 * pi, 0.4 * pi};
    std::vector<double> b(a.size());

    for (size_t i = 0; i < a.size(); ++i) {
        b[i] = std::cos(a[i]);
    }

    // Создаём интерполятор многочленами Ньютона
    boost::math::interpolators::newton_polynomial<double> interpolator(a, b);

    // Вычисляем значение в точке x* = 0.25 * pi
    double x_star = 0.25 * pi;
    double interpolated_value = interpolator(x_star);

    // Вычисляем точное значение функции в точке x*
    double exact_value = std::cos(x_star);

    // Вычисляем погрешность
    double error = std::abs(interpolated_value - exact_value);

    // Выводим результаты
    std::cout << "Значение функции в точке x* = " << x_star << " (интерполяция): " << interpolated_value << std::endl;
    std::cout << "Точное значение функции в точке x*: " << exact_value << std::endl;
    std::cout << "Погрешность Δ(y(x*)): " << error << std::endl;

    return 0;
}


