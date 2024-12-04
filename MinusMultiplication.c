#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    char str[50];
    int arrlen = 0;
    int i;
    char max=0;

    printf("입력한 문자열:");
    scanf("%s", str); //입력 받은 문자열을 배열str에 저장.


    while (str[arrlen] != '\0') // arrlen이 가리키는 문자가 널 문자 (\0)가 아닌 경우 참.
    {  
        arrlen++; 
    } 
    //단어 길이 계산
    
    for (i = 0 ; i<arrlen ; i++) {
        if (max < str[i])
            max = str[i];
        
    }

    printf("%c", max);
    return 0;
}
