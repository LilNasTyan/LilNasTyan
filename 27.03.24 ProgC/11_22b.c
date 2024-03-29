#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int array[10] = { 26, 126, 54, 154, 78, 178, 99, 199, 3, 103};
    printf("Элементы массива, не превышающие 100:\n");
    for (int i = 0; i < 10; ++i)
    {
        if (array[i] <= 100)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}