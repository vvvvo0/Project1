#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	int i = 0;
	printf("입력 받은 양의 정수: ");
	scanf("%d", &num);
	
	while (i<num+1)
	{
		printf("%d\n", 3*i);
		i++;
	}
	return 0;
}
