#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ������ ���������������\n������� �������� ������:");
	float a, b, h, V;
	printf("\n����� (��) -> ");
	 scanf("%f", &a);
	printf("\n������ (��) -> ");
	 scanf("%f", &b);
	printf("\n������ (��) -> ");
	 scanf("%f", &h);
	 V = a * b * h;
	printf("\n\n����� ��������������� = %f", V);

}