#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	
	char myText;
	printf("문자 입력 : ");
	scanf("%c",&myText);
	printf("%c문자의 아스키 코드 값은 %d입니다.\n", myText,myText );
	
	// 증감 연산자
	int num1 = 10, num2=20;
	int a,b;

	a=++num1;
	printf("%d,%d \n",a,num1);
	 
	b=num2++;
	printf("%d,%d \n",b,num2);
	// system("pause");
	
	return 0;
}
