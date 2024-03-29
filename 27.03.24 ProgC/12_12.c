#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	char word[] = "Привет";
	int length = strlen(word);
	printf("Последний символ слова: %c", word[length-1]);

}
