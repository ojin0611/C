#include <stdio.h>
void main(){
	
	int num=10;
	int tmp = &num;
	int* pointer_num=&num; // num�� �ּҸ� ������ ���� 
	
	
	printf("num : %d\n",num);
	printf("num�� �ּ� : %d\n\n",&num);

	printf("tmp = &num;�� ��� tmp : %d\n",tmp);
//	printf("tmp�� ��ġ�� �� : %d\n\n", *tmp);
// ������ �� int*�� �������� �ʾұ� ������ ���� �߻� 

	printf("pointer_num : %d // num�� �ּ� ����\n",pointer_num);
	printf("pointer_num�� ��ġ�� �� : %d\n", *pointer_num);

	
	return 0;
}
