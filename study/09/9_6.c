#include <stdio.h>
#include <string.h>

void main( ){
	char last_name[20]; 
	char first_name[20];
	char full_name[20];
	
	printf("��(Last name)�� �Է��ϼ���: ");
	scanf("%s",&last_name);
	printf("�̸�(First name)�� �Է��ϼ���: ");
	scanf("%s",&first_name);
	
	strcpy(full_name, last_name); 
	strcat(full_name," "); 
	strcat(full_name,first_name); 
	
	printf("%s",full_name);
	return 0;
}
