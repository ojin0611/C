#include <stdio.h>
#include <string.h>

void main( ){
	char last_name[20]; 
	char first_name[20];
	char full_name[20];
	
	printf("성(Last name)을 입력하세요: ");
	scanf("%s",&last_name);
	printf("이름(First name)을 입력하세요: ");
	scanf("%s",&first_name);
	
	strcpy(full_name, last_name); 
	strcat(full_name," "); 
	strcat(full_name,first_name); 
	
	printf("%s",full_name);
	return 0;
}
