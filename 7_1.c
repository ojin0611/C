#include <stdio.h>
void main(){
	
	int num=10;
	int tmp = &num;
	int* pointer_num=&num; // num의 주소를 저장한 변수 
	
	
	printf("num : %d\n",num);
	printf("num의 주소 : %d\n\n",&num);

	printf("tmp = &num;의 결과 tmp : %d\n",tmp);
//	printf("tmp에 위치한 값 : %d\n\n", *tmp);
// 저장할 때 int*로 저장하지 않았기 때문에 오류 발생 

	printf("pointer_num : %d // num의 주소 저장\n",pointer_num);
	printf("pointer_num에 위치한 값 : %d\n", *pointer_num);

	
	return 0;
}
