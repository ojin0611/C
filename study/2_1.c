#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	
	char myText;
	printf("���� �Է� : ");
	scanf("%c",&myText);
	printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.\n", myText,myText );
	
	// ���� ������
	int num1 = 10, num2=20;
	int a,b;

	a=++num1;
	printf("%d,%d \n",a,num1);
	 
	b=num2++;
	printf("%d,%d \n",b,num2);
	// system("pause");
	
	return 0;
}
