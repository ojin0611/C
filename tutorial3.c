#include <stdio.h>
#include <stdlib.h>

/* 
run this program using the console pauser or add your own getch, system("pause") or input loop 
*/

int main(void) 
{
   int myText;
   printf("양수인 정수 입력 : ");
   scanf("%d",&myText);
   if (myText%2==0){
      printf("짝수");
   }
   else{
      printf("홀수");
   }

//   printf("%c문자의 아스키 코드 값은 %d입니다.\n", myText,myText );
   
   // system("pause");
   
   return 0;
}
