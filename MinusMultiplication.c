#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    int i;
    char arr[] = { 'G','o','o','d' };
    int arrlen;
    
    arrlen = sizeof(arr) / sizeof(char);

    for (i = 0;i < arrlen;i++) {

        printf("%c", arr[i]); //���ڷ� ����� ���� ������ %c�� ����.

    }
    return 0;
}
