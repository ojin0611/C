#include <stdio.h>

/* 
run this program using the console pauser or add your own getch, system("pause") or input loop 
*/

int main(void) 
{
   // �����ο��ϱ� 
   float myNum;
   printf("������ �Է��Ͻÿ� : ");
   scanf("%f",&myNum);
   
   if (myNum>=90){
    printf("������ A�Դϴ�.");
   }
   else if(myNum>=80)
   	printf("������ B�Դϴ�.");
   else if(myNum>=70)
   	printf("������ C�Դϴ�.");
   else if(myNum>=60)
   	printf("������ D�Դϴ�.");
   else
   	printf("������ F�Դϴ�.");

//   printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.\n", myText,myText );
   
   // system("pause");
   
   return 0;
}
