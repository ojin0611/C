#include <stdio.h>
typedef struct {
	char name[64]; //�̸�
	int age; //���� 
	char sex; // ���� (m/f)
} member; 

void getInput(member members[], int count){
	char inputname[64];
	int inputage;
	char inputsex;
	int i;
	for(i=0;i<count;i++){
		printf("%d��° ����� ������ �Է��ϼ���: ",i+1);
		scanf("%s %d %c",&inputname, &inputage, &inputsex);
		strcpy(members[i].name,inputname);
		members[i].age = inputage;
		members[i].sex = inputsex;
	}

}
void printMember(member members[], int count){
	int i;
	for(i=0;i<count;i++){
		if(members[i].sex=='m')
			printf("%s�� �����̰� %d���̴�.\n",
			members[i].name, members[i].age);
		else
			printf("%s�� �����̰� %d���̴�.\n",
			members[i].name, members[i].age);
	}
}

void main( ){
	// member ���� 
	member members[3];
	int memberNum = sizeof(members)/sizeof(member);
	getInput(members, memberNum);
	printMember(members, memberNum);
	
	return 0;
}
