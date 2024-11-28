#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	int num1, num2;
	int result1, result2;

	printf("두 개의 정수 입력:");
	scanf("%d %d", &num1, &num2);

	result1 = num1 - num2;
	result2 = num1 * num2;
	printf("%d - %d = %d\n", num1, num2, result1);
	printf("%d X %d = %d", num1, num2, result2);
	return 0;
}
