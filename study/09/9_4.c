#include <stdio.h>
#include <string.h>

void swap_string(char* str1,char* str2){
	char tmp[10];
	strcpy(tmp,str1);
	strcpy(str1,str2);
	strcpy(str2,tmp);
}

void main( ){
	char str1[10] = "apple";
	char str2[10] = "banana";

	printf("%s %s\n",str1,str2);
	swap_string(&str1,&str2);
	printf("%s %s\n",str1,str2);

	return 0;
}
