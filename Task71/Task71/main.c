#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ���� �� ������ � ����������\n");
	float  v, km;

	printf("\n������� ��� � ������ -> ");
	scanf("%f", &v);

	km=v * 4.059;

	printf("\n\n %f ������ - ���  -> %f ��", v, km);
}