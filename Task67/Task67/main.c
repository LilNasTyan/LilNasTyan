#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ������ ��������\n������� �������� ������:");
	float r, h, V;
	const float M_PI = 3.1415;
	printf("\n������ ��������� (��) -> ");
	scanf("%f", &r);
	printf("\n������ �������� (��) -> ");
	scanf("%f", &h);
	V = M_PI * r * r * h;
	printf("\n\n����� �������� -> %f ���. ��", V);
}