//main.c
#include <stdio.h>
#include "score.h"

int main(int argc, char *argv[]){
	double korScore, mathScore, engScore;
	double total, avg;
	
	printf("����, ����, ���� ������ �Է��ϼ��� : ");
	scanf("%lf %lf %lf",&korScore, &mathScore, &engScore);
	
	get_total_avg(korScore,mathScore,engScore,&total,&avg);
	get_grade(avg);
	
	return 0;
}


