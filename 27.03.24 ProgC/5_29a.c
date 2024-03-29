#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int sum = 0;// Сумма всех чисел
    int count = 0;// Количество чисел
    int i;// Переменная для перебора чисел
    float b;

    printf("Введите число, которое больше или равно 150: ");
    scanf("%f", &b);

    // Считаем сумму всех чисел от 150 до b и их количество
    for (i = 150; i <= b; ++i) {
        sum += i;// Прибавление к сумме числа i
        ++count;// Увеличение счётчика на 1
    }

    // Находим среднее арифметическое
    float average = (float)sum / count;

    // Выводим результат
    printf("\nСреднее арифметическое всех чисел от 150 до %f: %f", b, average);

    return 0;
}