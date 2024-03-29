#include <stdio.h>
#include <locale.h>

int main() 
    {
    setlocale(LC_ALL, "rus");
    int array[10] = { 3, -5, 2, -7, 9, 0, -2, 8, -4, 6 };
    printf("Неотрицательные элементы массива:\n");
    for (int i = 0; i < 10; ++i)
        {
         if (array[i] >= 0) 
         {
            printf("%d ", array[i]);
         }
        }
    printf("\n");
}