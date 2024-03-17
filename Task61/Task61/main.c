#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float r1, r2, R;

	printf("Вычисление сопротивления электрическаой цепи \n");
	printf("Введите исходные данные: \n");

	printf("Величина первого сопротивления (Ом) -> ");
	scanf("%f", &r1);


	printf("\nВеличина второго сопротивления (Ом) -> ");
	scanf("%f", &r2);


	R = r1 * r2 / (r1 + r2);
	printf("\n\nСопротивление цепи -> %f Ом", R);
}