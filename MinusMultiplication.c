#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) 
{
    char str[50];
    int arrlen = 0;
    int i;
    char max=0;

    printf("�Է��� ���ڿ�:");
    scanf("%s", str); //�Է� ���� ���ڿ��� �迭str�� ����.


    while (str[arrlen] != '\0') // arrlen�� ����Ű�� ���ڰ� �� ���� (\0)�� �ƴ� ��� ��.
    {  
        arrlen++; 
    } 
    //�ܾ� ���� ���
    
    for (i = 0 ; i<arrlen ; i++) {
        if (max < str[i])
            max = str[i];
        
    }

    printf("%c", max);
    return 0;
}
