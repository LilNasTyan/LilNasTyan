#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	float h = 345.23, l = 432.43;
	printf("������ = %3.2f ��, ������ = %3.2f ��", h, l);
	getch();
}