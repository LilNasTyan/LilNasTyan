#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	float h = 345.23, l = 432.43;
	printf("высота = %3.2f см, ширина = %3.2f см", h, l);
	getch();
}