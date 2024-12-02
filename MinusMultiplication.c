#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
    
    int i = 0; //입력할 정수 개수
    int num = 0; //입력한 정수 저장
    int sum = 0; //입력한 정수의 합 저장
   
    while (i < 5) //5개 입력할 때까지 반복
    {
        printf("%d개 입력 중입니다\n", i + 1);
        scanf("%d", &num);
          while (num<1) //1 미만의 정수가 입력되는 경우 재 입력 요구
          {
            printf("다시 입력하세요.\n");
            scanf("%d", &num); //재입력 받기
          }
        sum += num; //안쪽while문 이후에 위치
        i++;
    }
    printf("입력한 5개 정수의 합: %d", sum);
    return 0;
}
