#include <stdio.h>
// �迭 & ������ ���� print 
int main()
{
	int ary[]={10, 20, 30, 40, 50};
	printf("ary = %d\n",ary);
	printf("ary+1 = %d\n",ary+1); // �ּҿ� +1 �ϸ� +4�� 
	printf("size of ary = %d\n",sizeof(ary));
	printf("size of ary[0]=%d\n",sizeof(ary[0]));
	
	int* pa = ary;
	printf("%d,%d,%d\n",*pa,ary,pa);
	printf("%d,%d,%d\n",*pa,pa,pa++); 
	// pa++�� �ڿ� �־ �� �ٿ� �����ϱ� pa=pa+1�� �����ϰ� 
	// pa++ ��ü�� +1�ϱ� �� ���� return�Ѵ�. 
	// pa = pa+1�� ���������� ary = ary+1�� �Ұ��� 
	
	printf("%d %d %d\n",sizeof(ary),sizeof(ary+0));
	// ary = ary+0 = &ary[0]
	return 0;
}



