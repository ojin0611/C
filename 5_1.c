#include <stdio.h>

// 함수 선언 
int hap(int a, int b);
int cha(int a, int b);
int gop(int a, int b);
int nanu(int a, int b);

// main 함수 
int main(int argc, char *argv[]) {

	int a, b, result;
	char c;
	printf("피연산자와 사칙연산자가 포함된 수식을 입력 : ");
	scanf("%d %d %c", &a, &b, &c);
	
	switch(c){
		case '+':
			result = hap(a,b); 
			break;
		case '-':
			result = cha(a,b); 
			break;
		case '*':
			result = gop(a,b); 
			break;
		case '/':
			result = nanu(a,b); 
			break;
		default : 
			printf("입력이 잘 못되었습니다.");	
		}
	printf("%d %c %d = %d", a, c, b, result);
	
	return 0;
}

// 함수 정의 
int hap(int a, int b){
	return a+b;
}
int cha(int a, int b){
	return a-b;
}
int gop(int a, int b){
	return a*b;
}
int nanu(int a, int b){
	return a/b;
}

