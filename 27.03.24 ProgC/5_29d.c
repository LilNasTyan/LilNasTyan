#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int sum = 0;// Сумма всех чисел
    int count = 0;// Количество чисел
    int i;// Переменная для перебора чисел
    int a, b;

    printf("Найти среднее арифметическое целых чисел от ");
    scanf("%i", &a);
    printf("до ");
    scanf("%i", &b);

    // Считаем сумму всех чисел от a до b и их количество
    for (i = a; i <= b; ++i) {
        sum += i;// Прибавление к сумме числа i
        ++count;// Увеличение счётчика на 1
    }

    // Находим среднее арифметическое
    float average = (float)sum / count;

    // Выводим результат
    printf("\nСреднее арифметическое всех чисел от %i до %i: %f", a, b, average);

    getch();
}