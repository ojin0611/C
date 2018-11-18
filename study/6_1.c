#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, max, min;
	int array[6] = {0};
	for(i=0;i<sizeof(array)/sizeof(array[0]);i++){	
		printf("%d번째 숫자 입력 : ",i+1);
		scanf("%d",&array[i]);
		if(i==0){
			max = array[i];
			min = array[i];
		}
		if(max<array[i]) max = array[i];
		if(min>array[i]) min = array[i];
	}
	printf("max : %d , min : %d", max, min);
	return 0;
}
