#include <stdio.h>

int main(void) 
{
	int i,j;
	for(i=0;i<5;i++){
		// 공백 
		for(j=0;j<5-i;j++){
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
