#include <stdio.h>
void main(){
	int a=1, b=2, c=3;
	int* ip=NULL; // �����ͺ��� ���� 
	
	//ip�� �ּҸ� �������� �ʰ� *ip�� �� �����ϸ� ���� 
	ip=&a; //ip�� a�� �ּҸ� ���� 
	*ip=10; //���� ip�ּ�(a�� �ּ�)�� 10�̶�� �� ���� 
	printf("a=%d, b=%d, c=%d, ip=%d, *ip=%d\n",a,b,c,ip,*ip);
	
	ip=&b; //ip�� b�� �ּҸ� ���� 
	*ip=20; //���� ip�ּ�(b�� �ּ�)�� 20�̶�� �� ���� 
	printf("a=%d, b=%d, c=%d, ip=%d, *ip=%d\n",a,b,c,ip,*ip);
	
	// &,*�� ���� ���ȴ�. 
	printf("%x, %x, %x\n",ip,*ip,&ip);
	printf("%x, %x, %x\n",&*&*&*ip,*&*&*&*ip,&*&ip);
	
	return 0;
}
