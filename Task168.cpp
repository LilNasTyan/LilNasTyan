// ����஢�� ���ᨢ� ��⮤�� ��אַ�� �롮�
#include <stdio.h>
#include <conio.h>
#define SZ 5 // ࠧ��� ���ᨢ�
void main()
{
    int a[SZ];  // ���ᨢ of integer;
    int i;      // ����� �������, �� ���ண� ������� ����
                // �������쭮�� ��-�
    int min;    // ����� �������쭮�� ������� � ���
                // ���ᨢ� �� i �� ���孥� �࠭��� ���ᨢ�
    int j;      // ����� ��-�, �ࠢ��������� � ���������
    int buf;    // �ᯮ������ �� ������ ��-⮢ ���ᨢ�
    int k;      // ������ ��� ����� � �뢮��

    printf("\n����஢�� ���ᨢ�\n");
    printf("������ ���ᨢ (� ����� ��ப� %i", SZ);
    printf("楫�� �ᥫ) � ������ <Enter>\n");
    printf("->");
    for (k = 0; k < SZ; k++)
        scanf("%i", &a[k]);

    printf("����஢��...\n");
    for (i = 0; i < SZ-1; i++)
    {
        // ���� �������쭮�� ��-�
        // � ��� ���ᨢ� �� a[i] �� ��᫥����� ��-�
        min = i;
        for (j = i+1; j < SZ; j++)
            if (a[j] < a[min])  min = j;
        
        // �����塞 ���⠬� a[min] � a[i]                
        buf = a[i];
        a[i] = a[min];
        a[min] = buf;
        // 横� ���஢�� �����祭
        // �⫠��筠� �����        
        // �뢥��� �஬����筮� ���ﭨ� ���ᨢ�
        for (k = 0; k < SZ; k++)
            printf("%i ", a[k]);
        printf("\n");
    }

    // �뢥��� �����஢���� ���ᨢ
    printf("���ᨢ �����஢��\n");
    for (k = 0; k < SZ; k++)
            printf("%i ", a[k]);
    printf("\n");

    printf("\n��� �����襭�� ࠡ��� ������ <Enter>");
    getch();
}
