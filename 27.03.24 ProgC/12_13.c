#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	char word[] = "������";
	int k;
	printf("������� ����� �������: ");
	scanf("%i", &k);
	printf("%i ������ �����: %c", k, word[k-1]);

}
