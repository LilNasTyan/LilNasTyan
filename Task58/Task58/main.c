#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float j;
	float v;
	float sfull;
	printf("���������� ��������� �������\n");
	printf("������� �������� ������: \n");

	printf("���� ����� (1 ��) -> ");
	scanf("%f", &j);


	printf("\n��� ����� (��) -> ");
	scanf("%f", &v);


	sfull = v * j;
	printf("\n\n��������� ������� -> %f ���.", sfull);
}