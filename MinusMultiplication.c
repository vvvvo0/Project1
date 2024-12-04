#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    int i;
    char arr[] = { 'G','o','o','d' };
    int arrlen;
    
    arrlen = sizeof(arr) / sizeof(char);

    for (i = 0;i < arrlen;i++) {

        printf("%c", arr[i]); //문자로 출력을 위해 서식을 %c로 변경.

    }
    return 0;
}
