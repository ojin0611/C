#include <stdio.h>

int main(void){
	double ary[5]={9.5,20.1,16.4,2.3,3.5};
	double min;
	get_min(ary, &min);
	printf("배열의 최소값 : %lf\n", min);
	return 0;
}

void get_min(double* array, double* pmin){
	double min = *array;
	
	int i;
	for(i=0; i<5;i++){
		if (*(array+i) < min) 
		min = *(array+i);
	}

	*pmin = min;
}
