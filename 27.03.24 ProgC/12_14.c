#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	char word[] = "Привет";
	if (sizeof(word) >= 5)
	{
		if (word[1] == word[3])
		{
			printf("2 и 4 символы в слове одинаковы");
		}
		else
		{
			printf("2 и 4 символы в слове различны");
		}
	}
	else
	{
		printf("Слово, которое Вы ввели слишком короткое");
	}
}