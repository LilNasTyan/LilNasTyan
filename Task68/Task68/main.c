#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ������� ����������� ��������\n������� �������� ������:");
	float r, h, S;
	const float M_PI = 3.1415;
	printf("\n������ ��������� (��) -> ");
	scanf("%f", &r);
	printf("\n������ �������� (��) -> ");
	scanf("%f", &h);
	S = 2 * M_PI * r * h + 2 * M_PI * r * r;
	printf("\n\n������� ����������� �������� -> %f ��. ��", S);
}