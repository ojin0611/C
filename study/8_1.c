#include <stdio.h>
void swap(double* pa, double* pb);
int main()
{
	double a=1.3;
	double b=1.7;

	printf("�ٲٱ� �� a,b�� �� : %f,%f\n", a,b);
	swap(&a,&b);
	printf("�ٲ� ���� a,b �� : %f, %f\n", a,b);

	return 0;
}

void swap(double* pa, double* pb){
	*pa=*pa + *pb;
	*pb=*pa - *pb;
	*pa=*pa - *pb;	
	
}


