#include <stdio.h>
#include <string.h>

void main( ){
	char data[10] = "abc";
	char result[16];
	strcpy(result, data); /* data 에저장된문자열을result 로복사*/
	strcat(result,"def"); /* result 값의맨뒤에“def”를덧붙임*/
	printf("%s + \"def\" = %s\n", data, result);
	
	int data_length;
	char data2[] = "happy";
	data_length = strlen(data2);
	printf("data2 length = %d\n",data_length);
	
	
	return 0;
}
