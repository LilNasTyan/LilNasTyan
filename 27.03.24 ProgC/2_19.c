#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, x, y;
	float m, n, k, e; //доп. переменные
	printf("¬ведите a: ");
	scanf("%f", &a);
	printf("\n¬ведите b: ");
	scanf("%f", &b);
	m = pow(a, 2);
	n = sqrt(b);
	k = fabs(a);
	e = sin(b);
	x = (2 / (m + 25) + b) / (n + (a + b) / 2);
	y = (k + 2 * e) / 5.5 * a;
	printf("x = %f, y = %f", x, y);
	getch();
}