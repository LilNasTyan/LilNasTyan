#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float a, h, S;
	
	printf("Вычисление площади треугольника\n");
	printf("Введите исходные данные: \n");

	printf("Основание (см) -> ");
	scanf("%f", &a);


	printf("\nВысота (см) -> ");
	scanf("%f", &h);


	S = a / 2 * h;
	printf("\n\nСтоимость покупки -> %f руб.", S);
}