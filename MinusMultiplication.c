#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int num = 0;
	int i = 9; //�������� ����Ϸ��� 9���� �����ؾ� �ϹǷ� i�� 9�� �ʱ�ȭ

	printf("�� ��?: ");
	scanf("%d", &num);

	while (i>0) //�������� ����ϱ� ���ؼ� num�� 0���� Ŭ ������ �ݺ�
	{

		printf("%d x %d = %d \n", num, i, num*i);
		i--; //num�� ����
	}
	return 0;
}
