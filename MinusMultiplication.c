#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    char str[50];
    int arrlen = 0;
    int i;

    printf("�Է��� ���ڿ�:");
    scanf("%s", str); //�Է� ���� ���ڿ��� �迭str�� ����.
    
    //paris > sirap ������ ���ϰ�, �� ������ ���� ���. 

    while (str[arrlen] != '\0') // arrlen�� ����Ű�� ���ڰ� �� ���� (\0)�� �ƴ� ��� ��.
    {  
        arrlen++; // �ݺ����� �� �� ����� ������ arrlen ���� 1�� ����.
    } 
    //while ���� ���ǽ��� ���� ���� �ݺ������� ����
    
    printf("���� ���: ");
    for (i = arrlen-1; i >= 0;i--) {
        printf("%c", str[i]);
    }

    return 0;
}
