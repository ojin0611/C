#include <stdio.h>

/* 
run this program using the console pauser or add your own getch, system("pause") or input loop 
*/

int main(void) 
{
	int myNum;
	char grade;

	printf("점수를 입력하시오 : ");
	scanf("%d",&myNum);

	switch(myNum/10){
		case 10:
			grade='A';
			break;
		case 9:
			grade='B';
			break;
		case 8:
			grade='C';
			break;
		case 7:
			grade='D';
			break;
		default:
			grade='F';
			break;
	}
	
	printf("당신의 학점은 %c입니다.",grade);
   
   return 0;
}
