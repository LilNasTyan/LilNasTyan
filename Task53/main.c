#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ������� ����������� ���������������\n������� �������� ������:");
	float a, b, h, S;
	printf("\n����� (��) -> ");
	scanf("%f", &a);
	printf("\n������ (��) -> ");
	scanf("%f", &b);
	printf("\n������ (��) -> ");
	scanf("%f", &h);
	S = 2 * a * 2 * b * 2 * h;
	printf("\n\n������� ����������� ��������������� = %f ��. ��", S);
}