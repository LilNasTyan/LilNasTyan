#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	int a;
	
	printf("Введите целое число и нажмите Enter\n");
	scanf("%i", &a);
	if (a % 2 == 0)
	{
		printf("Чётное");
	}
	else
	{
		printf("\n\nНечётное ");
	}
}