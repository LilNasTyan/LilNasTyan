#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float a, h, S;
	
	printf("���������� ������� ������������\n");
	printf("������� �������� ������: \n");

	printf("��������� (��) -> ");
	scanf("%f", &a);


	printf("\n������ (��) -> ");
	scanf("%f", &h);


	S = a / 2 * h;
	printf("\n\n��������� ������� -> %f ���.", S);
}