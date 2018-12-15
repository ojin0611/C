//score.c
#include <stdio.h>

void get_total_avg(double korScore,double mathScore,double engScore,
				double* total,double* avg){
	*total = korScore + mathScore + engScore;
	*avg = *total / 3.0;
	printf("��� : %0.2f, ���� : %0.2f\n",*avg,*total);
}

void get_grade(double avg){
	char grade;
	switch((int) (avg/10.0)){
		case 10:
			grade='A';
			break;
		case 9:
			grade='A';
			break;
		case 8:
			grade='B';
			break;
		case 7:
			grade='C';
			break;
		case 6:
			grade='D';
			break;
		case 5:
			grade='F';
			break;
		default :
			grade='X';
			break;		
	}
	printf("����� ������ %c�Դϴ�.\n",grade);
	
}

