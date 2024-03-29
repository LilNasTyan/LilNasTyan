#include <stdio.h>
#include <locale.h>

int recognize_power_of_five(int num) 
{
    int stepen = 0;

    // ���� ����� ������� �� 5 ��� ������� � �� ����� 0
    while (num % 5 == 0 && num != 0) {
        num /= 5; // ����� ����� �� 5
        stepen++;  // ����������� �������
    }

    return stepen; // ���������� ������� ����� 5
}

int main() 
{
    setlocale(LC_ALL, "rus");
    int n;
    printf("������� �����, ������� �� ������ ��������� �� ������� ������: ");
    scanf("%i", &n);
    int stepen = recognize_power_of_five(n);

    if (stepen > 0) {
        printf("%d �������� ������� � %d �������\n", n, stepen);
    }
    else {
        printf("%d �� �������� �������� ������\n", n);
    }

    return 0;
}