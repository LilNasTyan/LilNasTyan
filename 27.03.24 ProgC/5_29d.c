#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int sum = 0;// ����� ���� �����
    int count = 0;// ���������� �����
    int i;// ���������� ��� �������� �����
    int a, b;

    printf("����� ������� �������������� ����� ����� �� ");
    scanf("%i", &a);
    printf("�� ");
    scanf("%i", &b);

    // ������� ����� ���� ����� �� a �� b � �� ����������
    for (i = a; i <= b; ++i) {
        sum += i;// ����������� � ����� ����� i
        ++count;// ���������� �������� �� 1
    }

    // ������� ������� ��������������
    float average = (float)sum / count;

    // ������� ���������
    printf("\n������� �������������� ���� ����� �� %i �� %i: %f", a, b, average);

    getch();
}