#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float U, R, I, B;

	printf("���������� ��������� ������� �� ���� � ������� \n");
	printf("������� �������� ������: \n");

	printf("���������� �� ���� (��) -> ");
	scanf("%f", &U);


	printf("\n������ ������� (� �� 100 ��) -> ");
	scanf("%f", &R);

	printf("\n���� ����� ������� (���.) -> ");
	scanf("%f", &B);

	I = U * B * 2 * R / 2;
	printf("\n\n������� �� ���� � ������� �������� � %f ���.", I);
}