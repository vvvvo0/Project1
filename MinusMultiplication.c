#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int num = 0;
	int i = 9; //역순으로 출력하려면 9부터 시작해야 하므로 i을 9로 초기화

	printf("몇 단?: ");
	scanf("%d", &num);

	while (i>0) //역순으로 출력하기 위해서 num이 0보다 클 때까지 반복
	{

		printf("%d x %d = %d \n", num, i, num*i);
		i--; //num값 감소
	}
	return 0;
}
