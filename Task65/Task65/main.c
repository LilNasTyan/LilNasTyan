#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float U, R, I, B;

	printf("Вычисление стоимости поездки на дачу и обратно \n");
	printf("Введите исходные данные: \n");

	printf("Расстояние до дачи (км) -> ");
	scanf("%f", &U);


	printf("\nРасход бензина (л на 100 км) -> ");
	scanf("%f", &R);

	printf("\nЦена литра бензина (руб.) -> ");
	scanf("%f", &B);

	I = U * B * 2 * R / 2;
	printf("\n\nПоездка на дачу и обратно обойдётся в %f руб.", I);
}