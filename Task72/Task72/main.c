#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ������ �� ������\n������� �������� ������");
	float v, s, p, d;

	printf("\n�������� ������ (���.) -> ");
	scanf("%f", &v);

	printf("\n���� ������ (����) -> ");
	scanf("%f", &s);

	printf("\n���������� ������ (�������) -> ");
	scanf("%f", &p);

	d = v + p / 365 / 100 * s;
	v = v + d;

	printf("\n\n ����� -> %f ���.", d);
}