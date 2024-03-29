#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "rus");
    char word1[] = "������";
    char word2[] = "����";

    int length1 = strlen(word1);
    int length2 = strlen(word2);

    if (length1 > 0 && length2 > 0) {
      
        char char1 = tolower(word1[0]);
        char char2 = tolower(word2[length2 - 1]);

        if (char1 == char2) {
            printf("������ ����� \"%s\" ���������� �� �� �� �����, �� ������� ������������� ������ ����� \"%s\".\n", word1, word2);
        }
        else {
            printf("������ ����� \"%s\" �� ���������� �� �� �� �����, �� ������� ������������� ������ ����� \"%s\".\n", word1, word2);
        }
    }
    else {
        printf("���� �� ���� ������.\n");
    }

    return 0;
}