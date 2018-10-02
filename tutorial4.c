#include <stdio.h>

/* 
run this program using the console pauser or add your own getch, system("pause") or input loop 
*/

int main(void) 
{
   // 80점 넘으면 합격 
   int myText;
   printf("점수를 입력하시오 : ");
   scanf("%d",&myText);
   if (myText>=80){
      printf("축하합니다. 합격입니다.\n");
   }
   
   // system("pause");
   
   return 0;
}
