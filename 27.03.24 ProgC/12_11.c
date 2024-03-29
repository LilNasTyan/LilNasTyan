#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	char word[] = "Привет";
	printf("Третий символ слова: %c", word[2]);

}