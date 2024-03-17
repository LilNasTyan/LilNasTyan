#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Вычисление объёма цилиндра\nВведите исходные данные:");
	float r, h, V;
	const float M_PI = 3.1415;
	printf("\nРадиус основания (см) -> ");
	scanf("%f", &r);
	printf("\nВысота цилиндра (см) -> ");
	scanf("%f", &h);
	V = M_PI * r * r * h;
	printf("\n\nОбъём цилиндра -> %f куб. см", V);
}