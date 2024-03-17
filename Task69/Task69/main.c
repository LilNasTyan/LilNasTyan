#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Вычисление объёма параллелепипеда\n");
	printf("Числа разделяйте пробелами\n");

	float x, y, z, V;

	printf("\n-> ");
	scanf("%f%f%%f", &x, &y, &z);
	
	V = x * y * z;
	printf("\n\nОбъём параллелепипеда-> %f куб. см", V);
}