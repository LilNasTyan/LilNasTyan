#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ������� ��������������");
	float a, b, S;
	printf("\n����� (��) -> ");
	scanf("%f", &a);
	printf("\n������ (��) -> ");
	scanf("%f", &b);
	S = a * b;
	printf("\n\n������� ��������������� = %f", S);

}