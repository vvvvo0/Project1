#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
	float num1;
	double num2;
	long double num3;
	printf("�Ǽ� �Է�1(e ǥ�������): ");
	scanf("%f", &num1);
	printf("�Էµ� �Ǽ� %f\n", num1);
	printf("�Ǽ� �Է�2(e ǥ�������): ");
	scanf("%lf", &num2);
	printf("�Էµ� �Ǽ� %lf\n", num2);
	printf("�Ǽ� �Է�3(e ǥ�������): ");
	scanf("%Lf", &num3);
	printf("�Էµ� �Ǽ� %Lf", num3);
	return 0;
}
