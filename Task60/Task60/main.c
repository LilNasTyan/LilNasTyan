#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float a, b, k, S ;
	const float M_PI = 3.1415; 

	printf("���������� ������� ������������\n");
	printf("������� � ����� ������: \n");

	printf("����� ������ (��) -> ");
	scanf("%f%f", &a, &b);


	printf("\n������� �������� ���� ����� ��������� -> ");
	scanf("%f", &k);


	S = a * b * sin(k * M_PI / 180) / 2;
	printf("\n\n������� ������������ -> %f ���.", S);
}