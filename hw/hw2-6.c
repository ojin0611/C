#include <stdio.h>

int main(void) 
{
	int a=0;
	int sum=0;
	do{
		sum += a;
		printf("����� �Է��ϼ��� : ");
		scanf("%d", &a);
	}while(a>0);
	printf("������ �� : %d",sum);
	
	return 0;
}
