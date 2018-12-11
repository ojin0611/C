#include <stdio.h>
// 배열 & 포인터 값들 print 
int main()
{
	int ary[]={10, 20, 30, 40, 50};
	printf("ary = %d\n",ary);
	printf("ary+1 = %d\n",ary+1); // 주소에 +1 하면 +4됨 
	printf("size of ary = %d\n",sizeof(ary));
	printf("size of ary[0]=%d\n",sizeof(ary[0]));
	
	int* pa = ary;
	printf("%d,%d,%d\n",*pa,ary,pa);
	printf("%d,%d,%d\n",*pa,pa,pa++); 
	// pa++가 뒤에 있어도 한 줄에 있으니까 pa=pa+1을 연산하고 
	// pa++ 자체는 +1하기 전 값을 return한다. 
	// pa = pa+1이 가능하지만 ary = ary+1은 불가능 
	
	printf("%d %d %d\n",sizeof(ary),sizeof(ary+0));
	// ary = ary+0 = &ary[0]
	return 0;
}



