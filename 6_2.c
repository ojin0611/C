#include <stdio.h>

int main(int argc, char *argv[]) {
	int i, total = 0;
	double avg = 0;
	int score[5] = {0};
	int count = sizeof(score)/sizeof(score[0]);
	for(i=0;i<count;i++){	
		printf("%d��° �л��� ���� �Է� : ",i+1);
		scanf("%d",&score[i]);
		if(score[i]>100||score[i]<0){
			printf("�Է� �� ����!\n");
			i--;
			continue;
		}
		total += score[i];
		if(i == count - 1)	avg = (double)total / count;
	}
	printf("���� : %d , ��� : %0.2f", total, avg);
	return 0;
}
