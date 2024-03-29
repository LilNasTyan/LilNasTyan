#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	float x, y, a, b;
	printf("¬ведите x: ");
	scanf("%f", &x);
	if (x > 0)
	{
		a = sin(x);
		y = pow(a, 2);
	}
	else 
	{
		a = sin(x);
		y = 1 + 2 * pow(a, 2);
	}
	printf("y = %f", y);
}