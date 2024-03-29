#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c, f, e, g, h;
	float q, w, r, t, y, x;//доп. переменные

	printf("¬ведите f:");
	scanf("%f", &f);
	printf("\n¬ведите e:");
	scanf("%f", &e);
	printf("\n¬ведите g:");
	scanf("%f", &g);
	printf("\n¬ведите h:");
	scanf("%f", &h);

	a = (e + (f / 2)) / 3;

	q = pow(h, 2);
	w = q - g;
	b = fabs(w);

	r = g - h;
	t = pow(r, 2);
	y = sin(e);
	x = t - 3 * y;
	c = sqrt(x);

	printf("\na = %f, b = %f, c = %f", a, b, c);
	getch();
}
