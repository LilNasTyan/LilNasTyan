#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	char word[] = "������";
	if (sizeof(word) >= 5)
	{
		if (word[1] == word[3])
		{
			printf("2 � 4 ������� � ����� ���������");
		}
		else
		{
			printf("2 � 4 ������� � ����� ��������");
		}
	}
	else
	{
		printf("�����, ������� �� ����� ������� ��������");
	}
}