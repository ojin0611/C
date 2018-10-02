#include <stdio.h>

/* 
run this program using the console pauser or add your own getch, system("pause") or input loop 
*/

int main(void) 
{
   // 학점부여하기 
   float myNum;
   printf("점수를 입력하시오 : ");
   scanf("%f",&myNum);
   
   if (myNum>=90){
    printf("학점은 A입니다.");
   }
   else if(myNum>=80)
   	printf("학점은 B입니다.");
   else if(myNum>=70)
   	printf("학점은 C입니다.");
   else if(myNum>=60)
   	printf("학점은 D입니다.");
   else
   	printf("학점은 F입니다.");

//   printf("%c문자의 아스키 코드 값은 %d입니다.\n", myText,myText );
   
   // system("pause");
   
   return 0;
}
