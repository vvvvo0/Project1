#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    char str[50];
    int arrlen = 0;

    printf("입력한 문자열: %s", str);
    scanf("%s", str); //입력 받은 문자열을 배열str에 저장.
    


    while (str[arrlen] != '\0') // arrlen이 가리키는 문자가 널 문자 (\0)가 아닌 경우 참.
    {  
        arrlen++; // 반복문이 한 번 실행될 때마다 arrlen 값을 1씩 증가.
    } 
    //while 문은 조건식이 참인 동안 반복적으로 실행
    
    printf("영단어 길이: %d", arrlen);
    return 0;
}
