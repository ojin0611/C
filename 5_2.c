#include <stdio.h>

int result;
void sum(int n);

int main(int argc, char *argv[]) {
	int i = 0;
	printf("���ڸ� �Է��Ͻÿ�.");
	scanf("%d",&i);
	sum(i);
	printf("1���� �Է��� ��������  �� : %d",result);
	return 0;
}

void sum(int n){
	if(n==0) return;
	result += n;
	sum(n-1);
}