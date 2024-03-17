#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Вычисление площади поверхности параллелепипеда\nВведите исходные данные:");
	float a, b, h, S;
	printf("\nДлина (см) -> ");
	scanf("%f", &a);
	printf("\nШирина (см) -> ");
	scanf("%f", &b);
	printf("\nВысота (см) -> ");
	scanf("%f", &h);
	S = 2 * a * 2 * b * 2 * h;
	printf("\n\nПлощадь поверхности параллелепипеда = %f кв. см", S);
}