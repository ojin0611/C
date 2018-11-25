<<<<<<< HEAD
#include <stdio.h>
//배열, 포인터로 평균 구하기 
int main()
{
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double sum=0;

	int arysize=sizeof(ary)/sizeof(double);

	int i;
	for(i=0;i<arysize;i++){
		sum=sum+ *(ary+i);
		printf("i=%d, sum= %0.2f\n",i, sum);
	}
	printf("array size=%d, avg= %0.2f\n",arysize, sum/arysize);


	return 0;
}



=======
#include <stdio.h>
//배열, 포인터로 평균 구하기 
int main()
{
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double sum=0;

	int arysize=sizeof(ary)/sizeof(double);

	int i;
	for(i=0;i<arysize;i++){
		sum=sum+ *(ary+i);
		printf("i=%d, sum= %0.2f\n",i, sum);
	}
	printf("array size=%d, avg= %0.2f\n",arysize, sum/arysize);


	return 0;
}



>>>>>>> 59065751f7f48b1731a509923452d4c379c62385
