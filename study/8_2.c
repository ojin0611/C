<<<<<<< HEAD
#include <stdio.h>
// ���� 3���� ���� �� max,mid,min ��� by������ 
void line_up(double* pmax, double* pmid, double *pmin);

int main()
{
	double max, mid, min;
	printf("������ ���� �� ���� �Է��ϼ��� : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("ū ������ ���ʷ� ����ϸ� : %lf, %lf, %lf\n",
	 max, mid, min);
	return 0;
}
void line_up(double* pmax, double* pmid, double *pmin){
	double Max, Mid, Min;
	// Max ���ϱ� 
	Max = *pmax;
	if (Max<=*pmid) Max=*pmid;
	if (Max<=*pmin) Max=*pmin;
	
	// Min ���ϱ� 
	Min = *pmin;
	if (Min>=*pmax) Min=*pmax;
	if (Min>=*pmid) Min=*pmid;
	
	// Mid ���ϱ�
	Mid = *pmax + *pmid + * pmin - Max - Min; 
	
	// �ּҿ� �ٲ� �� ���� 
	*pmax = Max;
	*pmid = Mid;
	*pmin = Min;
	return 0;
}
=======
#include <stdio.h>
// ���� 3���� ���� �� max,mid,min ��� by������ 
void line_up(double* pmax, double* pmid, double *pmin);

int main()
{
	double max, mid, min;
	printf("������ ���� �� ���� �Է��ϼ��� : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("ū ������ ���ʷ� ����ϸ� : %lf, %lf, %lf\n",
	 max, mid, min);
	return 0;
}
void line_up(double* pmax, double* pmid, double *pmin){
	double Max, Mid, Min;
	// Max ���ϱ� 
	Max = *pmax;
	if (Max<=*pmid) Max=*pmid;
	if (Max<=*pmin) Max=*pmin;
	
	// Min ���ϱ� 
	Min = *pmin;
	if (Min>=*pmax) Min=*pmax;
	if (Min>=*pmid) Min=*pmid;
	
	// Mid ���ϱ�
	Mid = *pmax + *pmid + * pmin - Max - Min; 
	
	// �ּҿ� �ٲ� �� ���� 
	*pmax = Max;
	*pmid = Mid;
	*pmin = Min;
	return 0;
}
>>>>>>> 59065751f7f48b1731a509923452d4c379c62385
