#include <stdio.h>

// �Լ� ���� 
int hap(int a, int b);
int cha(int a, int b);
int gop(int a, int b);
int nanu(int a, int b);

// main �Լ� 
int main(int argc, char *argv[]) {

	int a, b, result;
	char c;
	printf("�ǿ����ڿ� ��Ģ�����ڰ� ���Ե� ������ �Է� : ");
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
			printf("�Է��� �� ���Ǿ����ϴ�.");	
		}
	printf("%d %c %d = %d", a, c, b, result);
	
	return 0;
}

// �Լ� ���� 
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

