#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	char word[] = "Привет";
	int k;
	printf("Введите номер символа: ");
	scanf("%i", &k);
	printf("%i символ слова: %c", k, word[k-1]);

}
