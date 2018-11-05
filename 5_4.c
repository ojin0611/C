#include <stdio.h>

void countfunc();
int count=30;

int main(void) {
	count=50;
	printf("global change: %d\n",count);

	int count=5;
	count+=2;
	countfunc();
	countfunc();
	countfunc();
	printf("local change? : %d\n",count);
	return 0;
}
void countfunc(){
	static int count;
	count++;
	printf("static : %d\n",count);
}	
