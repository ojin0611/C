#include <stdio.h>
// 배열 & 포인터 값들 print 
int main()
{
	int ary[10];

	int i;
	for(i=0;i<10;i++){
		printf("정수를 10개 입력하세요 (%d / 10): \n",i+1);
		scanf("%d", &ary[i]);
	}
	sort(ary);

	printf("오름차순 정렬 완료\nArray : ");
	for(i=0;i<10;i++){
		printf("%d ",ary[i]);
	}
	
	return 0;
}
// sort 
void sort(int* array){
	int j,k,temp;
    for(j=0;j<9;j++){
	    for(k=0;k<9-j;k++){
	        if(*(array+k)>*(array+k+1)){
	            temp = *(array+k);
	            *(array+k)= *(array+k+1);
	            *(array+k+1) = temp;
	        }
		}
	}
}


