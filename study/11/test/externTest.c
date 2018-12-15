//externTest.c
#include <stdio.h>
int a=6,b=3;
static int static_a = 10, static_b = 15;

void add(num1,num2){
	printf("µ¡¼À ¿¬»ê : %d\n", num1+num2);
}

void iplusplus(){
	static int i=1;
	printf("i : %d\n",i);
	i++;
}
