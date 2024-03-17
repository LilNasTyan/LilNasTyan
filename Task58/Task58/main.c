#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float j;
	float v;
	float sfull;
	printf("Вычисление стоимости покупки\n");
	printf("Введите исходные данные: \n");

	printf("Цена яблок (1 кг) -> ");
	scanf("%f", &j);


	printf("\nВес яблок (кг) -> ");
	scanf("%f", &v);


	sfull = v * j;
	printf("\n\nСтоимость покупки -> %f руб.", sfull);
}