#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	char word[] = "������";
	printf("������ ������ �����: %c", word[2]);

}