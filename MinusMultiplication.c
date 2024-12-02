#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
    
    int i = 0; //입력할 정수 개수
    int j = 0; //입력한 정수 저장
   
    while (i < 5) //5번 반복
    {
        j = 0;
          while (j<i) //o
          {
      
            printf("o");
       
            j++;
          }
        printf("*\n");
        i++;
    }
    return 0;
}
