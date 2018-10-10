#include <stdio.h>

int main(void) 
{
	int a,b;
	printf("정수를 2개 입력하시오 : ");
	scanf("%d %d", &a,&b);
	
	if (a==b){
		printf("두 개의 숫자는 같습니다.");
	}
   
   return 0;
}
