#include <stdio.h>
void main(){
	int a=1, b=2, c=3;
	int* ip=NULL; // 포인터변수 선언 
	
	//ip에 주소를 저장하지 않고 *ip에 값 저장하면 오류 
	ip=&a; //ip에 a의 주소를 저장 
	*ip=10; //현재 ip주소(a의 주소)에 10이라는 값 지정 
	printf("a=%d, b=%d, c=%d, ip=%d, *ip=%d\n",a,b,c,ip,*ip);
	
	ip=&b; //ip에 b의 주소를 저장 
	*ip=20; //현재 ip주소(b의 주소)에 20이라는 값 지정 
	printf("a=%d, b=%d, c=%d, ip=%d, *ip=%d\n",a,b,c,ip,*ip);
	
	// &,*은 서로 상쇄된다. 
	printf("%x, %x, %x\n",ip,*ip,&ip);
	printf("%x, %x, %x\n",&*&*&*ip,*&*&*&*ip,&*&ip);
	
	return 0;
}
