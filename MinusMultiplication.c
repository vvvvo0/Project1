#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    
    int num1 = 10;
    int num2 = 20;

    int* ptr1; //포인터 변수를 선언만하고 초기화하지 않으면 쓰레기 값으로 초기화 됨.
               //에러메시지: 초기화되지 않은 ptr1 지역 변수를 사용했습니다.
               //에러메시지: 초기화되지 않은 메모리 ptr1을 사용하고 있습니다.
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
