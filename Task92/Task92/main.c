#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	
	printf("������� ����� ����� � ������� Enter\n");
	scanf("%i", &a);
	if (a % 2 == 0)
	{
		printf("׸����");
	}
	else
	{
		printf("\n\n�������� ");
	}
}