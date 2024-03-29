#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	int array[10];
	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;

	printf("Введите 1 элемент: ");
	scanf("%i", &a0);
	array[0] = a0 ;

	printf("\nВведите 2 элемент: ");
	scanf("%i", &a1);
		array[1] = a1;

	printf("\nВведите 3 элемент: ");
	scanf("%i", &a2);
	array[2] = a2;

	printf("\nВведите 4 элемент: ");
	scanf("%i", &a3);
	array[3] = a3;

	printf("\nВведите 5 элемент: ");
	scanf("%i", &a4);
	array[4] = a4;

	printf("\nВведите 6 элемент: ");
	scanf("%i", &a5);
	array[5] = a5;

	printf("\nВведите 7 элемент: ");
	scanf("%i", &a6);
	array[6] = a6;

	printf("\nВведите 8 элемент: ");
	scanf("%i", &a7);
	array[7] = a7;

	printf("\nВведите 9 элемент: ");
	scanf("%i", &a8);
	array[8] = a8;

	printf("\nВведите 10 элемент: ");
	scanf("%i", &a9);
	array[9] = a9;

	printf("%i, %i, %i, %i, %i, %i, %i, %i, %i, %i, ", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);

}