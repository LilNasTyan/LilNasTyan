#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	
	float sum, rub, cop;

	printf("\n¬ведите рубли -> ");
	scanf("%f", &sum);

	rub = cop * 100;
	cop = sum % 100;

	printf("\n\n %f рублей - это %f руб. %f коп.", sum, rub, cop);
}