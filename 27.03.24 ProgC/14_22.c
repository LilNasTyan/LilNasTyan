#include <stdio.h>
#include <locale.h>

int recognize_power_of_five(int num) 
{
    int stepen = 0;

    // Пока число делится на 5 без остатка и не равно 0
    while (num % 5 == 0 && num != 0) {
        num /= 5; // Делим число на 5
        stepen++;  // Увеличиваем степень
    }

    return stepen; // Возвращаем степень числа 5
}

int main() 
{
    setlocale(LC_ALL, "rus");
    int n;
    printf("Введите число, которое вы хотите проверить на степень пятёрки: ");
    scanf("%i", &n);
    int stepen = recognize_power_of_five(n);

    if (stepen > 0) {
        printf("%d является пятёркой в %d степени\n", n, stepen);
    }
    else {
        printf("%d не является степенью пятёрки\n", n);
    }

    return 0;
}