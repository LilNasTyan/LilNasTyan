#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	printf("a = %5.3f       ");
	printf("b = %5.3f       ");
	printf("c = %5.3f       ");
	getch();
}