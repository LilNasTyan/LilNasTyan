#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "rus");
    char word1[] = "Привет";
    char word2[] = "Пока";

    int length1 = strlen(word1);
    int length2 = strlen(word2);

    if (length1 > 0 && length2 > 0) {
      
        char char1 = tolower(word1[0]);
        char char2 = tolower(word2[length2 - 1]);

        if (char1 == char2) {
            printf("Первое слово \"%s\" начинается на ту же букву, на которую заканчивается второе слово \"%s\".\n", word1, word2);
        }
        else {
            printf("Первое слово \"%s\" не начинается на ту же букву, на которую заканчивается второе слово \"%s\".\n", word1, word2);
        }
    }
    else {
        printf("Одно из слов пустое.\n");
    }

    return 0;
}