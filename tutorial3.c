#include <stdio.h>
#include <stdlib.h>

/* 
run this program using the console pauser or add your own getch, system("pause") or input loop 
*/

int main(void) 
{
   int myText;
   printf("����� ���� �Է� : ");
   scanf("%d",&myText);
   if (myText%2==0){
      printf("¦��");
   }
   else{
      printf("Ȧ��");
   }

//   printf("%c������ �ƽ�Ű �ڵ� ���� %d�Դϴ�.\n", myText,myText );
   
   // system("pause");
   
   return 0;
}
