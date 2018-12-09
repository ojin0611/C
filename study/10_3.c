#include <stdio.h>
typedef struct {
	char name[64]; //이름
	int age; //나이 
	char sex; // 성별 (m/f)
} member; 

void getInput(member members[], int count){
	char inputname[64];
	int inputage;
	char inputsex;
	int i;
	for(i=0;i<count;i++){
		printf("%d번째 사람의 정보를 입력하세요: ",i+1);
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
			printf("%s은 남자이고 %d살이다.\n",
			members[i].name, members[i].age);
		else
			printf("%s은 여자이고 %d살이다.\n",
			members[i].name, members[i].age);
	}
}

void main( ){
	// member 정의 
	member members[3];
	int memberNum = sizeof(members)/sizeof(member);
	getInput(members, memberNum);
	printMember(members, memberNum);
	
	return 0;
}
