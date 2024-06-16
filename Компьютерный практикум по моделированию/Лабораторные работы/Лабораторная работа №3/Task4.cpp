#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double x;
    cout << "Введите значение x: ";
    cin >> x;

    double sum = 0.0;
    double eps = 1e-6; // заданная точность

    int k = 1;
    do {
        // Вычисляем текущий член ряда: (-1)^k / (sin(kx) + 6 + k^2)
        double term = pow(-1.0, k) / (sin(k * x) + 6 + k * k);

        // Добавляем текущий член ряда к сумме
        sum += term;

        // Увеличиваем k для следующей итерации
        k++;

    } while (fabs(term) >= eps); // Продолжаем, пока текущий член ряда больше или равен eps

    // Выводим результат суммы
    cout << "Сумма ряда с точностью до 10^-6: " << sum << endl;

    return 0;
}

