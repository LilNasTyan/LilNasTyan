#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("���������� ������ ���������������\n");
	printf("����� ���������� ���������\n");

	float x, y, z, V;

	printf("\n-> ");
	scanf("%f%f%%f", &x, &y, &z);
	
	V = x * y * z;
	printf("\n\n����� ���������������-> %f ���. ��", V);
}