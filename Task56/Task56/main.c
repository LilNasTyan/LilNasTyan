#include <stdio.h>
#include <locale.h>
 void main()
{
	setlocale(LC_ALL, "rus");
	float st, sk, sfull;
	float t, k;
	printf("���������� ��������� �������\n");
	printf("������� �������� ������: \n");

	  printf("���� ������� (���.) -> ");
	  scanf("%f", &st);
	  

	printf("\n���������� �������� -> ");
	scanf("%f", &t);
	

	  printf("\n���� ��������� (���.) -> ");
	  scanf("%f", &sk);
	  

	printf("\n���������� ���������� -> ");
	scanf("%f", &k);
	
	sfull = st * t + sk * k;
	printf("\n\n��������� ������� -> %f ���.", sfull);
}