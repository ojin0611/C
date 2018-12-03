#include <stdio.h>
#include <string.h>

void main( ){
	char last_name[20]; 
	char first_name[20];
	char full_name[20];
	
	scanf("%s",&last_name);
	scanf("%s",&first_name);
	
	strcpy(full_name, last_name); /* data 에저장된문자열을result 로복사*/
	strcat(full_name,first_name); /* result 값의맨뒤에“def”를덧붙임*/

	printf("%s",full_name);
	return 0;
}
