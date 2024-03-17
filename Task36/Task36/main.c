#include <stdio.h>
#include <locale.h>
main()
{
	setlocale(LC_ALL, "Rus");
	printf("Имя: Анастасия \nФамилия: Игнатова");
	getch();
}