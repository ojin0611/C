#include <stdio.h>
//�迭, �����ͷ� ��� ���ϱ� 
int main()
{
	double ary[]={1.5, 20.1, 16.4, 2.3, 3.5};
	double* p=ary;
//	printf("%f %f\n",ary,*(p+1));

	int arysize=sizeof(ary)/sizeof(double);

	int i;
	for(i=0;i<arysize;i++){
		printf("%f\n",*(ary+arysize-i-1));
	}


	return 0;
}



