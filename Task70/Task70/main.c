#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Перерасчёт расстояния из верст в километры\n");
	float  v, km;

	printf("\nВведите расстояние в верстах -> ");
	scanf("%f", &v);

	km = v * 1.0668;
	
	printf("\n\n %f верст - это %f км", v, km);
}