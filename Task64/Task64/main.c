#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float U, R, I;

	printf("Вычисление расстояния между населёнными пунктами \n");
	printf("Введите исходные данные: \n");

	printf("Масштаб карты (км в 1 см) -> ");
	scanf("%f", &U);


	printf("\nРасстояние между точками, изображающими населённые пункты (см) -> ");
	scanf("%f", &R);


	I = U * R;
	printf("\n\nРасстояние между населёнными пунктами -> %f Ампер", I);
}