#include <stdio.h>

int main(void) 
{
	int a;
	printf("3�ڸ� �������� �Է��ϼ��� : ");
	scanf("%d", &a);
	
	// a_100, a_10, a_1�� ���� �����ϰ�, ¦ Ȧ�� �����Ѵ�.
	int a_100 = a/100; 
	int a_10  = a%100 /10;
	int a_1   = a%10;
	
	char* s100="¦��";		
	char* s10="¦��";		
	char* s1="¦��";		

	if (a_100 % 2==1){
		s100="Ȧ��";
	}
	if (a_10 % 2==1){
		s10="Ȧ��";
	}
	if (a_1 % 2==1){
		s1="Ȧ��";
	}
	
	printf("%d : %s, %d : %s, %d : %s", 
	a_100,s100,a_10,s10,a_1,s1);
	
	return 0;
}
