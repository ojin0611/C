//main.c
#include <stdio.h>
#include "circleHeader.h"

extern a,b;
// extern add(int num1,int num2); ������ ���� ���� 

int main(void){
	add(a,b);
	iplusplus();
	iplusplus();
	
	printf("������ 3�� ���� �ѷ� : %lf\n",circle(3));
	printf("������ 3�� ���� ���� : %lf\n",area(3));
	
}
