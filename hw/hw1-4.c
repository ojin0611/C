#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	/*
	scanf�� ���� �Է¹ޱ�.
	4�⸶�� ����O
	�� ��, 100�⸶�� ����X
	�� ��, 400�⸶�� ����O 
	*/
	
	printf("XXXX���� �����ϱ��?\n");
	int yesno = 0;
	
	int year = 6;
	printf("���� : ");
	scanf("%d",&year);

	
	yesno = 
	(year%4==0)?
		((year%100==0)?
			((year%400==0)?
				1:0)
			:0)
		:0;

	(yesno==1)?
		printf("%d���� �����Դϴ�.",year):
		printf("%d���� ������ �ƴմϴ�.",year)
	;

	
	return 0;
}
