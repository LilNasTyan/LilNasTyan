#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float st, so, sfull;
	float k;
	printf("Вычисление стоимости покупки\n");
	printf("Введите исходные данные: \n");

	printf("Цена тетради (руб.) -> ");
	scanf("%f", &st);


	printf("\nКоличество комплектов -> ");
	scanf("%f", &k);


	printf("\nЦена обложки (руб.) -> ");
	scanf("%f", &so);


	sfull = k * st + k * so;
	printf("\n\nСтоимость покупки -> %f руб.", sfull);
}