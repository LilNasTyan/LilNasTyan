#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	printf("/usr/include/stdio.h");
	getch();
}