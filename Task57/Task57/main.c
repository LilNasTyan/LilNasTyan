#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float st, so, sfull;
	float k;
	printf("���������� ��������� �������\n");
	printf("������� �������� ������: \n");

	printf("���� ������� (���.) -> ");
	scanf("%f", &st);


	printf("\n���������� ���������� -> ");
	scanf("%f", &k);


	printf("\n���� ������� (���.) -> ");
	scanf("%f", &so);


	sfull = k * st + k * so;
	printf("\n\n��������� ������� -> %f ���.", sfull);
}