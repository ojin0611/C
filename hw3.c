#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	/*
	6세 이상 & 130cm 이상. 6세 미만시 보호자 동반!
	심약자 탑승불가
	
	age, height, health, guardian
	scanf로 각각의 정보 입력받기.
	심약0 강1
	보호동반1 아니면0 
	탑승가능1 아니면0 
	*/
	
	printf("당신은 놀이기구를 탈 수 있을까요?\n");
	int possible = 0;
	
	int age = 6;
	printf("나이 : ");
	scanf("%d",&age);

	float height = 130;
	printf("키 : ");
	scanf("%f",&height);

	int health = 1;
	printf("심약자는 0, 아니면 1 : ");
	scanf("%d",&health);

	int guardian = 1;
	printf("보호자 동반 시 1, 아니면 0 : ");
	scanf("%d",&guardian);
	
//	printf("%d,%f,%d,%d\n",age,height,health,guardian); 
	
	possible = 
	(health==1)?
		((height>=130)? 
			((age>=6)? 
				1:
				((guardian==1)? 
					1:0)
				)
			: 0)
		: 0;

	printf("가능여부 : %d",possible);

	
	return 0;
}
