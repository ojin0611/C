#include <stdio.h>
#include <string.h>

void main( ){
	char data[10] = "abc";
	char result[16];
	strcpy(result, data); /* data ������ȹ��ڿ���result �κ���*/
	strcat(result,"def"); /* result ���Ǹǵڿ���def����������*/
	printf("%s + \"def\" = %s\n", data, result);
	
	int data_length;
	char data2[] = "happy";
	data_length = strlen(data2);
	printf("data2 length = %d\n",data_length);
	
	
	return 0;
}
