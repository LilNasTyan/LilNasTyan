#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float U, R, I;

	printf("���������� ���������� ����� ���������� �������� \n");
	printf("������� �������� ������: \n");

	printf("������� ����� (�� � 1 ��) -> ");
	scanf("%f", &U);


	printf("\n���������� ����� �������, ������������� ��������� ������ (��) -> ");
	scanf("%f", &R);


	I = U * R;
	printf("\n\n���������� ����� ���������� �������� -> %f �����", I);
}