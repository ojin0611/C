<<<<<<< HEAD
#include <stdio.h>
// 임의 3개의 숫자 중 max,mid,min 계산 by포인터 
void line_up(double* pmax, double* pmid, double *pmin);

int main()
{
	double max, mid, min;
	printf("임의의 숫자 세 개를 입력하세요 : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("큰 수부터 차례로 출력하면 : %lf, %lf, %lf\n",
	 max, mid, min);
	return 0;
}
void line_up(double* pmax, double* pmid, double *pmin){
	double Max, Mid, Min;
	// Max 구하기 
	Max = *pmax;
	if (Max<=*pmid) Max=*pmid;
	if (Max<=*pmin) Max=*pmin;
	
	// Min 구하기 
	Min = *pmin;
	if (Min>=*pmax) Min=*pmax;
	if (Min>=*pmid) Min=*pmid;
	
	// Mid 구하기
	Mid = *pmax + *pmid + * pmin - Max - Min; 
	
	// 주소에 바뀐 값 저장 
	*pmax = Max;
	*pmid = Mid;
	*pmin = Min;
	return 0;
}
=======
#include <stdio.h>
// 임의 3개의 숫자 중 max,mid,min 계산 by포인터 
void line_up(double* pmax, double* pmid, double *pmin);

int main()
{
	double max, mid, min;
	printf("임의의 숫자 세 개를 입력하세요 : ");
	scanf("%lf %lf %lf", &max, &mid, &min);
	line_up(&max, &mid, &min);
	printf("큰 수부터 차례로 출력하면 : %lf, %lf, %lf\n",
	 max, mid, min);
	return 0;
}
void line_up(double* pmax, double* pmid, double *pmin){
	double Max, Mid, Min;
	// Max 구하기 
	Max = *pmax;
	if (Max<=*pmid) Max=*pmid;
	if (Max<=*pmin) Max=*pmin;
	
	// Min 구하기 
	Min = *pmin;
	if (Min>=*pmax) Min=*pmax;
	if (Min>=*pmid) Min=*pmid;
	
	// Mid 구하기
	Mid = *pmax + *pmid + * pmin - Max - Min; 
	
	// 주소에 바뀐 값 저장 
	*pmax = Max;
	*pmid = Mid;
	*pmin = Min;
	return 0;
}
>>>>>>> 59065751f7f48b1731a509923452d4c379c62385
