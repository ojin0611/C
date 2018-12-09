#include <stdio.h>
typedef struct {
	int grade;//학년
	int group;//학급
	int number;//출석번호
	char name[64];//이름
	double stature;//신장;
	double weight;//체중
}student_data; 

void main( ){
	// Student1 정의 
	student_data student1;

	student1.grade=3;
	student1.group=3;
	strcpy(student1.name,"YJ");
	printf("Student1 : %d학년 %d반 %s\n",
	student1.grade, student1.group,student1.name);

	// Student2 정의 
	student_data student2={0,0,0,"",0,0};
	
	printf("Student2 : %d,%d,%d,%s,%d,%d\n",
	student2.grade, student2.group, student2.number, student2.name,
	student2.stature, student2.weight);

	return 0;
}
