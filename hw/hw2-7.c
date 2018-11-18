#include <stdio.h>

int main(void) 
{
	int i,j;
	int n=8;
	for(i=0;i<n;i++){
		// 공백 
		for(j=0;j<n-i;j++){
			printf(" ");
		}
		
		// 숫자 
		for(j=1;j<=i+1;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	
	
	return 0;
}
