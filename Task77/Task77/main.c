#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	printf("��������� ��������\n");
	printf("������� � ����� ������ ������� � �������� -> ");
	scanf("%f%f", &a, &b);
	
	if (b != 0)
	{
		c = a / b;
		printf("������� �� ������� %f �� %f", a, b);
		printf("����� %f", c);
	}
	else
	{
		printf("\n������! �������� �� ����� ���� ����� ����!");
	}
}