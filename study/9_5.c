#include <stdio.h>
#include <string.h>
void printlonger(char* data1, char* data2, int data1_length, int data2_length){
	int i;
	if (data1_length>data2_length){
		for(i=0;i<data1_length;i++) printf("%c",data1[i]);
	}
	else{
		for(i=0;i<data1_length;i++) printf("%c",data2[i]);
	}
}

void main( ){
	int data1_length, data2_length;
	char data1[] = "christmas";
	char data2[] = "happy";
	data1_length = strlen(data1);
	data2_length = strlen(data2);
	printlonger(data1,data2,data1_length, data2_length);
	
	return 0;
}
