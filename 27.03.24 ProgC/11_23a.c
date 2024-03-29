#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int array[10] = { 26, 126, 54, 154, 78, 178, 99, 199, 4, 104 };
    printf("Чётные элементы массива:\n");
    for (int i = 0; i < 10; ++i)
    {
        if (array[i]%2 == 0)
        {
            printf("%d ", array[i]);
        }
    }
    printf("\n");
}