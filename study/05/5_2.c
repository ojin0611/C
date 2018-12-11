#include <stdio.h>

int result;
void sum(int n);

int main(int argc, char *argv[]) {
	int i = 0;
	printf("숫자를 입력하시오.");
	scanf("%d",&i);
	sum(i);
	printf("1부터 입력한 수까지의  합 : %d",result);
	return 0;
}

void sum(int n){
	if(n==0) return;
	result += n;
	sum(n-1);
}