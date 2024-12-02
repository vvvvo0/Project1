#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
  
    int outnum=2; // 단을 나타내는 변수
    int innum=1; //1부터 9까지 곱

        while(outnum < 10) //2부터 9까지 반복
        {
            innum = 1; //다시 1부터 곱해주기 위해 초기화 필요함.
            while (innum<10)
            {
                printf("%d x %d = %d\n", outnum, innum, outnum*innum);
                innum++;
            }
         outnum++;
        }
       
    return 0;
}
