#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");

	float sum, rub, cop, cop1;

	printf("\n������� ����� -> ");
	scanf("%f", &sum);

	rub = cop * 100;
	cop1 = sum % 100.0;

	printf("\n\n %f ������ - ��� %f ���. %f ���.", sum, rub, cop1);
}