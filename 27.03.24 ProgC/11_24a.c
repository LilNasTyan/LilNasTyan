#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int array[10] = { 260, 1206, 5400, 150, 78, 10, 99, 20, 4, 100 };
    printf("Двузначные элементы массива:\n");
    for (int i = 0; i < 10; ++i)
    {
        if (array[i] >= 10 && array[i] <= 99)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}