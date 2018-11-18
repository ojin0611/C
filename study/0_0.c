#include <stdio.h>
void main(){
	
	int num=10;
	int tmp;
	tmp = &num;
	int* pointer_num=&num; // num의 주소를 저장한 변수 
	
	printf("tmp = &num;의 결과 tmp : %d\n",tmp);
	
	printf("num : %d\n",num);
	printf("num의 주소 : %d\n",&num);
	printf("pointer_num : %d\n",*pointer_num);

	
	return 0;
}
