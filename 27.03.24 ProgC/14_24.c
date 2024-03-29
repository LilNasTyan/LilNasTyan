#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
bool simple(int num)
{
	if (num <= 1)
	{
		return false;
	}
	for (int i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	setlocale(LC_ALL, "Rus");
	printf("Простые числа-близнецы: ");
	
	for (int num = 3; num <= 200; num++) 
	{
		if (simple(num) && simple(num - 2)) 
		{
			printf("(%d, %d)\n", num - 2, num);
		}
	}
	return 0;
}