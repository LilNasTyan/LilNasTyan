#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float r1, r2, R;

	printf("���������� ������������� �������������� ���� \n");
	printf("������� �������� ������: \n");

	printf("�������� ������� ������������� (��) -> ");
	scanf("%f", &r1);


	printf("\n�������� ������� ������������� (��) -> ");
	scanf("%f", &r2);


	R = r1 * r2 / (r1 + r2);
	printf("\n\n������������� ���� -> %f ��", R);
}