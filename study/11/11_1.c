#include <stdio.h>
// ��ũ�� ���� ���� 
#define MAX 100
#define PI 3.14
#define STRING "Hello C"
#define OUTPUT printf
#define DATA int

// ��ũ�� �Լ� ���� 
#define MUL(x,y) x*y
#define getSTR(s) #s // #�� ��� : ���ڿ��� ������ش�. 


int main(void){
	// ��ũ�� ���� ��� & ���� ���� 
	DATA a=3;
	OUTPUT("%d, %lf, %s, %d \n",MAX, PI, STRING, a);	
	
	#undef PI
	#undef STRING
	
	double PI = 3.141592;
	#define STRING "Hello Dev-C++"

	OUTPUT("%d, %lf, %s, %d \n",MAX, PI, STRING, a);
	printf("--------------------------------\n");
	
	// ��ũ�� �Լ� ���
	int b =4;
	printf("%d*%d = %d\n",a,b, MUL(a,b)); 
	printf("%d+1*%d+1 = %d\n",a,b, MUL(a+1,b+1)); 
	printf("getSTR ��� : %s, %s\n",getSTR(PI),getSTR(5+2));
	
	printf("--------------------------------\n");
	// �̸� ���ǵ� ��ũ��
	printf("���� �̸� : %s\n",__FILE__); 
	printf("���� �� ��ȣ : %d\n",__LINE__); 
	printf("������ ��¥ : %s\n",__DATE__); 
	printf("������ �ð� : %s\n",__TIME__); 
	
	printf("--------------------------------\n");
	// ���Ǻ� ��ũ�� 
	/*
	#undef MAX
	#define MAX 1000
	*/
	#if (MAX == 100)
	OUTPUT("#if�� ���� MAX �� = %d\n",MAX);
	#elif (MAX==1000)
	OUTPUT("#if�� ���� MAX �� = %d\n",MAX);
	#else
	OUTPUT("#if ���� MAX�� 100 �Ǵ� 1000 �� �ƴմϴ�.\n");
	#endif
	
	printf("--------------------------------\n");
	#ifdef PI
	OUTPUT("PI�� ��ũ�κ����� ������ֽ��ϴ�.\n");
	#else
	OUTPUT("PI�� ��ũ�κ����� ��������� �ʽ��ϴ�.\n");
	#endif
	
	return 0;
}


