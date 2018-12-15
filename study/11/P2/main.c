//main.c
#include <stdio.h>
#include "score.h"

int main(int argc, char *argv[]){
	double korScore, mathScore, engScore;
	double total, avg;
	
	printf("국어, 영어, 수학 점수를 입력하세요 : ");
	scanf("%lf %lf %lf",&korScore, &mathScore, &engScore);
	
	get_total_avg(korScore,mathScore,engScore,&total,&avg);
	get_grade(avg);
	
	return 0;
}


