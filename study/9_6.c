#include <stdio.h>
#include <string.h>

void main( ){
	char last_name[20]; 
	char first_name[20];
	char full_name[20];
	
	scanf("%s",&last_name);
	scanf("%s",&first_name);
	
	strcpy(full_name, last_name); /* data ������ȹ��ڿ���result �κ���*/
	strcat(full_name,first_name); /* result ���Ǹǵڿ���def����������*/

	printf("%s",full_name);
	return 0;
}
