#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	int array[10];
	int a0, a1, a2, a3, a4, a5, a6, a7, a8, a9;

	printf("������� 1 �������: ");
	scanf("%i", &a0);
	array[0] = a0 ;

	printf("\n������� 2 �������: ");
	scanf("%i", &a1);
		array[1] = a1;

	printf("\n������� 3 �������: ");
	scanf("%i", &a2);
	array[2] = a2;

	printf("\n������� 4 �������: ");
	scanf("%i", &a3);
	array[3] = a3;

	printf("\n������� 5 �������: ");
	scanf("%i", &a4);
	array[4] = a4;

	printf("\n������� 6 �������: ");
	scanf("%i", &a5);
	array[5] = a5;

	printf("\n������� 7 �������: ");
	scanf("%i", &a6);
	array[6] = a6;

	printf("\n������� 8 �������: ");
	scanf("%i", &a7);
	array[7] = a7;

	printf("\n������� 9 �������: ");
	scanf("%i", &a8);
	array[8] = a8;

	printf("\n������� 10 �������: ");
	scanf("%i", &a9);
	array[9] = a9;

	printf("%i, %i, %i, %i, %i, %i, %i, %i, %i, %i, ", a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);

}