#include <stdio.h>
#include <locale.h>
 void main()
{
	setlocale(LC_ALL, "rus");
	float st, sk, sfull;
	float t, k;
	printf("Вычисление стоимости покупки\n");
	printf("Введите исходные данные: \n");

	  printf("Цена тетради (руб.) -> ");
	  scanf("%f", &st);
	  

	printf("\nКоличество тетрадей -> ");
	scanf("%f", &t);
	

	  printf("\nЦена карандаша (руб.) -> ");
	  scanf("%f", &sk);
	  

	printf("\nКоличество карандашей -> ");
	scanf("%f", &k);
	
	sfull = st * t + sk * k;
	printf("\n\nСтоимость покупки -> %f руб.", sfull);
}