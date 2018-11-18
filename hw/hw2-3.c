#include <stdio.h>

int main(void) 
{
	int sum=0;
	int a=1;
	while (a<=100){
		sum += a;
		a=a+1;
	}
	
	
	printf("%d",sum);
	
	return 0;
}
