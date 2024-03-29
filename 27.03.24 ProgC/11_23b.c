#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int array[10] = { 260, 1206, 5400, 150, 78, 10, 99, 20, 4, 100 };
    printf("Ёлементы массива, оканчивающиес€ нулЄм:\n");
    for (int i = 0; i < 10; ++i)
    {
        if (array[i] % 10 == 0)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}