#include <iostream>
#include <cmath>

using namespace std;

// Функция, которую мы оптимизируем
double f(double x, double y, double z) {
    double term1 = exp(x*x + y*y);
    double term2 = log(4 + y*y + 2*z*z);
    return term1 + term2;
}

// Метод покоординатного спуска
void coordinateDescent(double& x, double& y, double& z, double epsilon = 1e-6) {
    double step = 0.1;  // Начальный шаг изменения координат

    while (step > epsilon) {
        double x_orig = x, y_orig = y, z_orig = z;
        
        // Изменяем x
        double fx_orig = f(x, y, z);
        x += step;
        double fx_plus_x = f(x, y, z);
        if (fx_plus_x < fx_orig) {
            // Если функция уменьшилась, оставляем x таким
            continue;
        }
        else {
            // Возвращаем x на предыдущее значение
            x = x_orig;
        }

        // Изменяем y
        double fy_orig = f(x, y, z);
        y += step;
        double fy_plus_y = f(x, y, z);
        if (fy_plus_y < fy_orig) {
            // Если функция уменьшилась, оставляем y таким
            continue;
        }
        else {
            // Возвращаем y на предыдущее значение
            y = y_orig;
        }

        // Изменяем z
        double fz_orig = f(x, y, z);
        z += step;
        double fz_plus_z = f(x, y, z);
        if (fz_plus_z < fz_orig) {
            // Если функция уменьшилась, оставляем z таким
            continue;
        }
        else {
            // Возвращаем z на предыдущее значение
            z = z_orig;
        }

        // Уменьшаем шаг
        step *= 0.9;
    }
}

int main() {
    double x = 0.0, y = 0.0, z = 0.0;

    // Находим минимум методом покоординатного спуска
    coordinateDescent(x, y, z);

    // Выводим найденные значения
    cout << "Минимум функции f(x, y, z) = e^(x^2 + y^2) + ln(4 + y^2 + 2z^2) достигается в точке:\n";
    cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
    cout << "Значение функции в этой точке: " << f(x, y, z) << endl;

    return 0;
}

