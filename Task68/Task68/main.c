#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Вычисление площади поверхности цилиндра\nВведите исходные данные:");
	float r, h, S;
	const float M_PI = 3.1415;
	printf("\nРадиус основания (см) -> ");
	scanf("%f", &r);
	printf("\nВысота цилиндра (см) -> ");
	scanf("%f", &h);
	S = 2 * M_PI * r * h + 2 * M_PI * r * r;
	printf("\n\nПлощадь поверхности цилиндра -> %f кв. см", S);
}