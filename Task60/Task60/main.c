#include <stdio.h>
#include <locale.h>
#include <math.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float a, b, k, S ;
	const float M_PI = 3.1415; 

	printf("Вычисление площади треугольника\n");
	printf("Введите в одной строке: \n");

	printf("Длины сторон (см) -> ");
	scanf("%f%f", &a, &b);


	printf("\nВведите величину угла между сторонами -> ");
	scanf("%f", &k);


	S = a * b * sin(k * M_PI / 180) / 2;
	printf("\n\nПлощадь треугольника -> %f руб.", S);
}