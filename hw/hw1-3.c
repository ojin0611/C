#include <stdio.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	/*
	6�� �̻� & 130cm �̻�. 6�� �̸��� ��ȣ�� ����!
	�ɾ��� ž�ºҰ�
	
	age, height, health, guardian
	scanf�� ������ ���� �Է¹ޱ�.
	�ɾ�0 ��1
	��ȣ����1 �ƴϸ�0 
	ž�°���1 �ƴϸ�0 
	*/
	
	printf("����� ���̱ⱸ�� Ż �� �������?\n");
	int possible = 0;
	
	int age = 6;
	printf("���� : ");
	scanf("%d",&age);

	float height = 130;
	printf("Ű : ");
	scanf("%f",&height);

	int health = 1;
	printf("�ɾ��ڴ� 0, �ƴϸ� 1 : ");
	scanf("%d",&health);

	int guardian = 1;
	printf("��ȣ�� ���� �� 1, �ƴϸ� 0 : ");
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

	printf("���ɿ��� : %d",possible);

	
	return 0;
}
