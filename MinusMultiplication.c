#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    
    int num1 = 10;
    int num2 = 20;

    int* ptr1 = &num1;
    int* ptr2 = &num2;
    int* temp;


    (*ptr1) += 10;
    (*ptr2) -= 10;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp; //포인터 변수 ptr1 가리키는 변수와 ptr2가 가리키는 변수를 바꾸기 위해 포인터 변수 하나 추가.

    printf("%d, %d", *ptr1, *ptr2);


    return 0;
}
