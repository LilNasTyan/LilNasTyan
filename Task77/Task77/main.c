#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	printf("Выделение частного\n");
	printf("Введите в одной строке делимое и делитель -> ");
	scanf("%f%f", &a, &b);
	
	if (b != 0)
	{
		c = a / b;
		printf("Частное от деления %f на %f", a, b);
		printf("равно %f", c);
	}
	else
	{
		printf("\nОшибка! Делитель не может быть равен нулю!");
	}
}