#include <stdio.h>
void main(){
	// ������ ���� ����
	char* cp = NULL;
	int* ip = NULL; // null, Null �Ұ��� 

	char c='A';
	cp=&c; // �ּ� ���� 
	printf("���������� ���� c�� �ҷ����� %c\n",*cp);

	// cp == *&cp
	printf("cp�� �� = %x, cp�� �ּ�=%x, *&cp=%x\n",cp,&cp,*&cp); 
	printf("%x, %x, %x\n",ip,&ip,*&ip);
	
	// size of char & int
	printf("%d, %d \n",sizeof(char),sizeof(int));

	// �������� ũ��� 4byte(32bit) �Ǵ� 8byte(64bit)
	printf("%d, %d \n",sizeof(char*),sizeof(int*));
	printf("%d, %d \n",sizeof(cp),sizeof(ip));

	char** cpp = &cp; //2���� �������� ũ�⵵ �����ұ�? 
	printf("%d, %d, %d \n",sizeof(char**),sizeof(&cp),sizeof(cpp));
	// �����ϴ�~
	 
	return 0;
}
