#include <stdio.h>
#include <locale.h>
#include <stdbool.h>
bool simple(int num) 
{
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() 
{
    setlocale(LC_ALL, "rus");
    printf("Все трехзначные простые числа:\n");
    for (int num = 100; num < 1000; num++) {
        if (simple(num)) {
            printf("%d\n", num);
        }
    }
    return 0;
}