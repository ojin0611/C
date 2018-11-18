#include <stdio.h>

void get_sum_mul(int x, int y, int* p_sum, int* p_mul);

void main(){
	int a, b, sum, mul;
	printf("정수를 2개 입력하세요 : ");
	scanf("%d %d", &a, &b);
	get_sum_mul(a, b, &sum, &mul); 
	
	printf("두 정수의 합=%d, 곱=%d\n", sum,mul);
	
	return 0;
}

void get_sum_mul(int x, int y, int* p_sum, int* p_mul){
	*p_sum = x + y;
	*p_mul = x * y;
}
