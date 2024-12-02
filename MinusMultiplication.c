#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
	int num = 0;
	int i = 9; //역순으로 출력하려면 9부터 시작해야 하므로 i을 9로 초기화

	

	while (i>0) //역순으로 출력하기 위해서 num이 0보다 클 때까지 반복
	{
		printf("몇 단?: ");
		scanf("%d", &num);
		printf("%d x %d = %d \n", num, i, num*i);
		i--; //num값 감소
	}
	return 0;
}

/*직전 코드의 차이점은 printf("몇 단?: "); 와 scanf("%d", &num); 의 위치.
첫 번째 코드에서는 while 문 밖에서 단 한 번만 입력을 받지만, 두 번째 코드에서는 while 문 안에서 매번 입력을 받음.
while 문 안에서 입력을 받게 되면, 반복문이 실행될 때마다 사용자 입력을 기다리게 됨.
 즉, 9단부터 1단까지 출력되는 동안 매번 "몇 단?: "이 출력되고 사용자 입력을 기다리기 때문에 한 줄씩 출력되는 듯.
 구구단 전체를 한 번에 출력하려면 첫 번째 코드처럼 while 문 밖에서 단 한 번만 입력을 받아야 함.
*/