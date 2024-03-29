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
		array[i] = rand() / (RAND_MAX + 1.0);
	}
	printf("ћассив из случайных вещественных чисел от 0 до 1:\n");
	for (int i = 0; i < 15; ++i)
	{
		printf("%f", array[i]);
		printf("\n");
	}
}