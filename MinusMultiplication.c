#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
    int count;
    int num;
    int sum = 0;
    float average; // �Ҽ��� ���ϱ��� ����ϱ� ���� float �ڷ������� ����
    int i = 0;

    printf("�� ���� ������ �Է��Ͻðڽ��ϱ�? ");
    scanf("%d", &count);

    while (i < count) 
    {
        printf("%d��° ������ �Է��ϼ���: ", i + 1);
        scanf("%d", &num);
        sum += num;
        i++;
    }

    average = (double)sum / count; // sum�� double�� ����ȯ
    printf("�Էµ� ������ ��հ��� %f�Դϴ�.\n", average);

    return 0;
}
