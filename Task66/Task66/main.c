#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float m, sec, min, km, t, V;

	printf("Вычисление скорости бега \n");
	printf("Введите исходные данные: \n");

	printf("Длина дистанции (м) -> ");
	scanf("%f", &m);


	printf("\nВремя (мин.) -> ");
	scanf("%f", &min);
	printf("\nВремя (сек.) -> ");
	scanf("%f", &sec);

	printf("\nДистанция -> %f", m);
	t = min * 60 + sec * 3600;
	km = 1000 * m;
	V = km / t;
	printf("\n\nВы бежали со скоростью %f км/час", V);
	getch();
}