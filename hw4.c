#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	/*
	scanf로 연도 입력받기.
	4년마다 윤년O
	그 중, 100년마다 윤년X
	그 중, 400년마다 윤년O 
	*/
	
	printf("XXXX년은 윤년일까요?\n");
	int yesno = 0;
	
	int year = 6;
	printf("연도 : ");
	scanf("%d",&year);

	
	yesno = 
	(year%4==0)?
		((year%100==0)?
			((year%400==0)?
				1:0)
			:0)
		:0;

	(yesno==1)?
		printf("%d년은 윤년입니다.",year):
		printf("%d년은 윤년이 아닙니다.",year)
	;

	
	return 0;
}
