#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	int i = 0;
	printf("�Է� ���� ���� ����: ");
	scanf("%d", &num);
	
	while (i++<num)
	{
		printf("%d\n", 3*i);
	}
	return 0;
}
