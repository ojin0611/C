#include <stdio.h>

int main(void) 
{
	int a;
	printf("3자리 십진수를 입력하세요 : ");
	scanf("%d", &a);
	
	// a_100, a_10, a_1을 각각 저장하고, 짝 홀을 구분한다.
	int a_100 = a/100; 
	int a_10  = a%100 /10;
	int a_1   = a%10;
	
	char* s100="짝수";		
	char* s10="짝수";		
	char* s1="짝수";		

	if (a_100 % 2==1){
		s100="홀수";
	}
	if (a_10 % 2==1){
		s10="홀수";
	}
	if (a_1 % 2==1){
		s1="홀수";
	}
	
	printf("%d : %s, %d : %s, %d : %s", 
	a_100,s100,a_10,s10,a_1,s1);
	
	return 0;
}
