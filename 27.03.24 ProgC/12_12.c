#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	char word[] = "������";
	int length = strlen(word);
	printf("��������� ������ �����: %c", word[length-1]);

}
