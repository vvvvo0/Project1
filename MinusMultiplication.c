#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void) {
    int count;
    int num;
    int sum = 0;
    float average; // 소수점 이하까지 계산하기 위해 float 자료형으로 선언
    int i = 0;

    printf("몇 개의 정수를 입력하시겠습니까? ");
    scanf("%d", &count);

    while (i < count) 
    {
        printf("%d번째 정수를 입력하세요: ", i + 1);
        scanf("%d", &num);
        sum += num;
        i++;
    }

    average = (double)sum / count; // sum을 double로 형변환
    printf("입력된 정수의 평균값은 %f입니다.\n", average);

    return 0;
}
