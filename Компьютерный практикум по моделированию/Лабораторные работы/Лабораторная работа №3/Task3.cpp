#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double sum = 0.0;
    double term1, term2;
    double eps = 1e-6; // заданная точность

    int k = 1;
    do {
        // Вычисляем первый член ряда: 6 / 2^(k-1)
        term1 = 6.0 / pow(2.0, k-1);
        
        // Вычисляем второй член ряда: (-1)^(k-1) / (2 * 3^(k-1))
        term2 = pow(-1.0, k-1) / (2.0 * pow(3.0, k-1));

        // Добавляем текущий член ряда к сумме
        sum += term1 + term2;

        // Увеличиваем k для следующей итерации
        k++;

    } while (fabs(term1 + term2) >= eps); // Продолжаем, пока текущий член ряда больше или равен eps

    // Выводим результат суммы
    cout << "Сумма ряда с точностью до 10^-6: " << sum << endl;

    return 0;
}

