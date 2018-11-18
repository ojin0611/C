#include <stdio.h>

int main(void) 
{
	int sum=0;
	int a;
	for (a=1; a<=100; a++){
		if (a % 2 == 0){
			sum += a;
		}
	}
	
	
	printf("%d",sum);
	
	return 0;
}
