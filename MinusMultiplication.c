#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num;
	int i=0;
	printf("입력 받은 양의 정수: ");
	scanf("%d", &num);
	
	while (i<num)
	{
		printf("Hello world! \n", num);
		i++;
	}
	return 0;
}
