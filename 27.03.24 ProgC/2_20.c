#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	float a, b, c, f, e, g, h;
	float q, w, r, t, y;//���. ����������

	printf("������� f:");
	scanf("%f", &f);
	printf("\n������� e:");
	scanf("%f", &e);
	printf("\n������� g:");
	scanf("%f", &g);
	printf("\n������� h:");
	scanf("%f", &h);

	q = e - (3 / f);
	w = fabs(q);
	r = pow(w, 3) + g;
	a = sqrt(r);

	t = cos(h);
	b = sin(e) + pow(t, 2);

	c = (33 * g) / (e * f - 3);

	printf("\na = %f, b = %f, c = %f", a, b, c);
	getch();
}
