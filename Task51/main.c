#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "Rus");
	printf("Вычисление площади прямоугольника");
	float a, b, S;
	printf("\nДлина (см) -> ");
	scanf("%f", &a);
	printf("\nШирина (см) -> ");
	scanf("%f", &b);
	S = a * b;
	printf("\n\nПлощадь параллелограмма = %f", S);

}