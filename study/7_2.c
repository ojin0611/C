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
	
	// �������� ũ��� 4byte(32bit) �Ǵ� 8byte(64bit)
	printf("%d, %d \n",sizeof(char*),sizeof(int*));
	printf("%d, %d \n",sizeof(cp),sizeof(ip));
	
	
	return 0;
}
