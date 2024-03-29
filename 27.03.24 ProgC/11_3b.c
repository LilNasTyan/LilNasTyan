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
		float x = rand() / (RAND_MAX + 1.0);
		float y = 22 + x;
		array[i] = y;
	}
	printf("ћассив из случайных вещественных чисел от 22 до 23:\n");
	for (int i = 0; i < 15; ++i)
	{
		printf("%f", array[i]);
		printf("\n");
	}
}