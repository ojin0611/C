#include <stdio.h>
void main(){
	
	int num=10;
	int tmp;
	tmp = &num;
	int* pointer_num=&num; // num�� �ּҸ� ������ ���� 
	
	printf("tmp = &num;�� ��� tmp : %d\n",tmp);
	
	printf("num : %d\n",num);
	printf("num�� �ּ� : %d\n",&num);
	printf("pointer_num : %d\n",*pointer_num);

	
	return 0;
}
