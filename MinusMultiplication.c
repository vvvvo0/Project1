#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    
    int num1 = 10;
    int num2 = 20;

    int* ptr1; //������ ������ �����ϰ� �ʱ�ȭ���� ������ ������ ������ �ʱ�ȭ ��.
               //�����޽���: �ʱ�ȭ���� ���� ptr1 ���� ������ ����߽��ϴ�.
               //�����޽���: �ʱ�ȭ���� ���� �޸� ptr1�� ����ϰ� �ֽ��ϴ�.
    int* ptr2 = &num2;
    int* temp;


    (*ptr1) += 10;
    (*ptr2) -= 10;

    temp = ptr1;
    ptr1 = ptr2;
    ptr2 = temp; //������ ���� ptr1 ����Ű�� ������ ptr2�� ����Ű�� ������ �ٲٱ� ���� ������ ���� �ϳ� �߰�.

    printf("%d, %d", *ptr1, *ptr2);


    return 0;
}
