#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
    
    int i = 0; //�Է��� ���� ����
    int num = 0; //�Է��� ���� ����
    int sum = 0; //�Է��� ������ �� ����
   
    while (i < 5) //5�� �Է��� ������ �ݺ�
    {
        printf("%d�� �Է� ���Դϴ�\n", i + 1);
        scanf("%d", &num);
          while (num<1) //1 �̸��� ������ �ԷµǴ� ��� �� �Է� �䱸
          {
            printf("�ٽ� �Է��ϼ���.\n");
            scanf("%d", &num); //���Է� �ޱ�
          }
        sum += num; //����while�� ���Ŀ� ��ġ
        i++;
    }
    printf("�Է��� 5�� ������ ��: %d", sum);
    return 0;
}
