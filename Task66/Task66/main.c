#include <stdio.h>
#include <locale.h>
void main()
{
	setlocale(LC_ALL, "rus");
	float m, sec, min, km, t, V;

	printf("���������� �������� ���� \n");
	printf("������� �������� ������: \n");

	printf("����� ��������� (�) -> ");
	scanf("%f", &m);


	printf("\n����� (���.) -> ");
	scanf("%f", &min);
	printf("\n����� (���.) -> ");
	scanf("%f", &sec);

	printf("\n��������� -> %f", m);
	t = min * 60 + sec * 3600;
	km = 1000 * m;
	V = km / t;
	printf("\n\n�� ������ �� ��������� %f ��/���", V);
	getch();
}