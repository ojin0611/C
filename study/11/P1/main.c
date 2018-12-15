#include <stdio.h>
#include "myheader.h"
extern a,b,c,result;

int main(void){
	myInput();
		
	switch(c){
		case '+':
			result = hap(a,b); 
			break;
		case '-':
			result = cha(a,b); 
			break;
		case '*':
			result = gop(a,b); 
			break;
		case '/':
			result = nanu(a,b); 
			break;
		default : 
			printf("입력이 잘못되었습니다.");	
		}
	myOutput(a,b,c,result);
	
	
	return 0;
}


