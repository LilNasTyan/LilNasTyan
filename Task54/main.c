#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ������ ����\n������� �������� ������:");
	float a, V;
	printf("\n����� ����� (��) -> ");
	scanf("%f", &a);
	V = a * a * a;
	printf("\n\n����� ���� -> %f ���. ��", V);
}