#include <stdio.h>
typedef struct {
	int grade;//�г�
	int group;//�б�
	int number;//�⼮��ȣ
	char name[64];//�̸�
	double stature;//����;
	double weight;//ü��
}student_data; 

void main( ){
	// Student1 ���� 
	student_data student1;

	student1.grade=3;
	student1.group=3;
	strcpy(student1.name,"YJ");
	printf("Student1 : %d�г� %d�� %s\n",
	student1.grade, student1.group,student1.name);

	// Student2 ���� 
	student_data student2={0,0,0,"",0,0};
	
	printf("Student2 : %d,%d,%d,%s,%d,%d\n",
	student2.grade, student2.group, student2.number, student2.name,
	student2.stature, student2.weight);

	return 0;
}
