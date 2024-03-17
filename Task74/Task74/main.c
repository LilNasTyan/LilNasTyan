#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");

	float sum, rub, cop, cop1;

	printf("\n¬ведите рубли -> ");
	scanf("%f", &sum);

	rub = cop * 100;
	cop1 = sum % 100.0;

	printf("\n\n %f рублей - это %f руб. %f коп.", sum, rub, cop1);
}