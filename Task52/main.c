#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Вычисление объёма параллелепипеда\nВведите исходные данные:");
	float a, b, h, V;
	printf("\nДлина (см) -> ");
	 scanf("%f", &a);
	printf("\nШирина (см) -> ");
	 scanf("%f", &b);
	printf("\nВысота (см) -> ");
	 scanf("%f", &h);
	 V = a * b * h;
	printf("\n\nОбъём параллелепипеда = %f", V);

}