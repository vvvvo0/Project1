#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
  
    int outnum=2; // ���� ��Ÿ���� ����
    int innum=1; //1���� 9���� ��

        while(outnum < 10) //2���� 9���� �ݺ�
        {
            innum = 1; //�ٽ� 1���� �����ֱ� ���� �ʱ�ȭ �ʿ���.
            while (innum<10)
            {
                printf("%d x %d = %d\n", outnum, innum, outnum*innum);
                innum++;
            }
         outnum++;
        }
       
    return 0;
}
