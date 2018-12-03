#include <stdio.h>
#include <string.h>
void swap_string(char* str1,char* str2){
	char tmp[10]="";
	int count = 0;
	while( str1[count] ) {
		*(tmp+count) = *(str1+count);
		count++;
	}
	count = 0;
	while( str2[count] ) {
		*(str1+count) = *(str2+count);
		count++;
	}
	count = 0;
	while( str2[count] ) {
		*(str2+count) = *(tmp+count);
		count++;
	}
}

void main( ){
	char str1[10] = "apple";
	char str2[10] = "banana";

	printf("%s %s\n",str1,str2);
	swap_string(&str1,&str2);
	printf("%s %s\n",str1,str2);

	return 0;
}
