<<<<<<< HEAD
#include <stdio.h>
void swap(double* pa, double* pb);
int main()
{
	double a=1.3;
	double b=1.7;

	printf("바꾸기 전 a,b의 값 : %f,%f\n", a,b);
	swap(&a,&b);
	printf("바꾼 후의 a,b 값 : %f, %f\n", a,b);

	return 0;
}

void swap(double* pa, double* pb){
	*pa=*pa + *pb;
	*pb=*pa - *pb;
	*pa=*pa - *pb;	
	
}


=======
#include <stdio.h>
void swap(double* pa, double* pb);
int main()
{
	double a=1.3;
	double b=1.7;

	printf("바꾸기 전 a,b의 값 : %f,%f\n", a,b);
	swap(&a,&b);
	printf("바꾼 후의 a,b 값 : %f, %f\n", a,b);

	return 0;
}

void swap(double* pa, double* pb){
	*pa=*pa + *pb;
	*pb=*pa - *pb;
	*pa=*pa - *pb;	
	
}


>>>>>>> 59065751f7f48b1731a509923452d4c379c62385
