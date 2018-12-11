#include <stdio.h>
void main(){
	// 포인터 변수 선언
	char* cp = NULL;
	int* ip = NULL; // null, Null 불가능 

	char c='A';
	cp=&c; // 주소 저장 
	printf("간접접근을 통해 c값 불러오면 %c\n",*cp);

	// cp == *&cp
	printf("cp의 값 = %x, cp의 주소=%x, *&cp=%x\n",cp,&cp,*&cp); 
	printf("%x, %x, %x\n",ip,&ip,*&ip);
	
	// size of char & int
	printf("%d, %d \n",sizeof(char),sizeof(int));

	// 포인터의 크기는 4byte(32bit) 또는 8byte(64bit)
	printf("%d, %d \n",sizeof(char*),sizeof(int*));
	printf("%d, %d \n",sizeof(cp),sizeof(ip));

	char** cpp = &cp; //2차원 포인터의 크기도 동일할까? 
	printf("%d, %d, %d \n",sizeof(char**),sizeof(&cp),sizeof(cpp));
	// 동일하다~
	 
	return 0;
}
