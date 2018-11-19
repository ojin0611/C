#include <stdio.h>
//while, for
int main()
{
	int a=1;
	if (a!=0)
	while(a<10){
		a=a*2;
		printf("a의 값: %d\n",a);
	}
	int b=1;
	int i;
	for(i=0; i<6; i++){
		b=b*3;
		printf("b의 값: %d\n",b);
	}

	return 0;
}

