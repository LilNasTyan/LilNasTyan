#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	
	float sum, rub, cop;

	printf("\n������� ����� -> ");
	scanf("%f", &sum);

	rub = cop * 100;
	cop = sum % 100;

	printf("\n\n %f ������ - ��� %f ���. %f ���.", sum, rub, cop);
}