#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, total = 0;
	double avg = 0;
	int score[5] = {0};
	int count = sizeof(score)/sizeof(score[0]);
	for(i=0;i<count;i++){	
		printf("%d번째 학생의 성적 입력 : ",i+1);
		scanf("%d",&score[i]);
		if(score[i]>100||score[i]<0){
			printf("입력 값 오류!\n");
			i--;
			continue;
		}
		total += score[i];
		if(i == count - 1)	avg = (double)total / count;
	}
	printf("총점 : %d , 평균 : %0.2f", total, avg);
	return 0;
}
