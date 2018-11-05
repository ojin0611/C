#include <stdio.h>

/* 
run this program using the console pauser or add your own getch, system("pause") or input loop 
*/

int main(void) 
{
   // 3의 배수인지 판별 
   int myNum;
   printf("양수를 입력하시오 : ");
   scanf("%d",&myNum);
   if (myNum % 3 == 0){
      printf("3의 배수입니다.");
   }
   

//   printf("%c문자의 아스키 코드 값은 %d입니다.\n", myText,myText );
   
   // system("pause");
   
   return 0;
}
