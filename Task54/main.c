#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Вычисление объёма куба\nВведите исходные данные:");
	float a, V;
	printf("\nДлина ребра (см) -> ");
	scanf("%f", &a);
	V = a * a * a;
	printf("\n\nОбъём куба -> %f куб. см", V);
}