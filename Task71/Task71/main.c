#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("ѕерерасчЄт веса из фунтов в килограммы\n");
	float  v, km;

	printf("\n¬ведите вес в фунтах -> ");
	scanf("%f", &v);

	km=v * 4.059;

	printf("\n\n %f фунтов - это  -> %f кг", v, km);
}