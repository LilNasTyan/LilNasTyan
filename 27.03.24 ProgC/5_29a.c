#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "rus");
    int sum = 0;// ����� ���� �����
    int count = 0;// ���������� �����
    int i;// ���������� ��� �������� �����
    float b;

    printf("������� �����, ������� ������ ��� ����� 150: ");
    scanf("%f", &b);

    // ������� ����� ���� ����� �� 150 �� b � �� ����������
    for (i = 150; i <= b; ++i) {
        sum += i;// ����������� � ����� ����� i
        ++count;// ���������� �������� �� 1
    }

    // ������� ������� ��������������
    float average = (float)sum / count;

    // ������� ���������
    printf("\n������� �������������� ���� ����� �� 150 �� %f: %f", b, average);

    return 0;
}