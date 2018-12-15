//main.c
#include <stdio.h>
#include "circleHeader.h"

extern a,b;
// extern add(int num1,int num2); 왜인지 생략 가능 

int main(void){
	add(a,b);
	iplusplus();
	iplusplus();
	
	printf("반지름 3인 원의 둘레 : %lf\n",circle(3));
	printf("반지름 3인 원의 넓이 : %lf\n",area(3));
	
}
