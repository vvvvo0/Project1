#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    char str[50];
    int arrlen = 0;

    printf("�Է��� ���ڿ�: %s", str);
    scanf("%s", str); //�Է� ���� ���ڿ��� �迭str�� ����.
    


    while (str[arrlen] != '\0') // arrlen�� ����Ű�� ���ڰ� �� ���� (\0)�� �ƴ� ��� ��.
    {  
        arrlen++; // �ݺ����� �� �� ����� ������ arrlen ���� 1�� ����.
    } 
    //while ���� ���ǽ��� ���� ���� �ݺ������� ����
    
    printf("���ܾ� ����: %d", arrlen);
    return 0;
}
