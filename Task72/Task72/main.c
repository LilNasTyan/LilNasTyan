#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Вычисление дохода по вкладу\nВведите исходные данные");
	float v, s, p, d;

	printf("\nВеличина вклада (руб.) -> ");
	scanf("%f", &v);

	printf("\nСрок вклада (дней) -> ");
	scanf("%f", &s);

	printf("\nПроцентная ставка (годовых) -> ");
	scanf("%f", &p);

	d = v + p / 365 / 100 * s;
	v = v + d;

	printf("\n\n Доход -> %f руб.", d);
}