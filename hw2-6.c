#include <stdio.h>

int main(void) 
{
	int a=0;
	int sum=0;
	do{
		sum += a;
		printf("양수를 입력하세요 : ");
		scanf("%d", &a);
	}while(a>0);
	printf("누적된 값 : %d",sum);
	
	return 0;
}
