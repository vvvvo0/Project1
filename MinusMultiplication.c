#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
    
    int i = 0; //�Է��� ���� ����
    int j = 0; //�Է��� ���� ����
   
    while (i < 5) //5�� �ݺ�
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
