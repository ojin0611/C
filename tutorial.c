#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("Let's learn C Programming Language!\n");
	printf("Tab: \t Bigger: \" Smaller: \' Enter: \n");
	printf("%d - %d = %d \n",3,5,3-5);
	printf("10jinsu : %d = 16jinsu : %x, 8jinsu : %o \n",50,50,50);
	printf("%s %c.\n","Capital of a is",'A'); 
	
	printf("%03d, %03d, %03d \n",1,20,300);
	printf("%-3d, %-3d, %-3d \n",1,20,300);
	printf("%3d, %3d, %3d \n",1,20,300);
	
	int age;
	printf("What is your age?: ");
	scanf("%d",&age);
	printf("Wow! Really? Are you %d years old?\n", age );
	
	// system("pause");
	
	return 0;
}
