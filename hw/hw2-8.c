#include <stdio.h>

int main(void) 
{
	int i,j;
	for(i=2;i<=9;i++){
		for(j=2;j<=9;j++){
			printf("%d X %d = %2d \n",i,j,i*j);
		}
	}
	
	return 0;
}
