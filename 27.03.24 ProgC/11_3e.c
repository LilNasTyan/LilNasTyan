#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
void main()
{
    setlocale(LC_ALL, "Rus");
    srand(time(NULL));

    float array[15];
    for (int i = 0; i < 15; ++i)
    {
        float x = rand() % 11;
        array[i] = x;
    }
    printf("������ �� ��������� ������������ ����� �� 0 �� 10 ������������:\n");
    for (int i = 0; i < 15; ++i)
    {
        printf("%f", array[i]);
        printf("\n");
    }
}