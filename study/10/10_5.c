#include <stdio.h>
typedef struct {
	char name[64]; //�̸�
	int age; //���� 
	char sex; // ���� (m/f)
} member; 

void getInput(member members[], int count);
void printMember(member members[], int count, int whatsort);
void sort(int* array, int count);

void main( ){
	// member ���� 
	member members[3];
	int memberNum = sizeof(members)/sizeof(member);
	
	getInput(members, memberNum);
	
	int whatsort = 0;
	printf("���ı��� : 1. ���̼�, 2. �̸��� ? ");
	scanf("%d",&whatsort);
	printMember(members, memberNum,whatsort);
	
	return 0;
}

void getInput(member members[], int count){
	char inputname[64];
	int inputage;
	char inputsex;
	int i;
	while(i<count){
		printf("%d��° ����� ������ �Է��ϼ��� (ex.Yang 25 f) : ",i+1);
		scanf("%s %d %c",&inputname, &inputage, &inputsex);

		if (inputage<=0 || inputage>120){
			printf("������ �ٽ� �Է��ϼ���\n");
			continue;
		} 
		strcpy(members[i].name,inputname);
		members[i].age = inputage;
		members[i].sex = inputsex;
		i++;
	}
}
// sort 
void sort(int* array, int count){
	count=count-1;
	int j,k,temp;
    for(j=0;j<count;j++){
	    for(k=0;k<count-j;k++){
	        if(*(array+k)>*(array+k+1)){
	            temp = *(array+k);
	            *(array+k)= *(array+k+1);
	            *(array+k+1) = temp;
	        }
		}
	}
}


void printMember(member members[], int count, int whatsort){
	int i;
	if (whatsort==1){
		int ages[count];
		for(i=0;i<count;i++){
			ages[i]=members[i].age;
		}
		sort(ages,count);
	
		int c=0;
		while (c<count){
			for(i=0;i<count;i++){
				if(members[i].age==ages[c]){
					if(members[i].sex=='m')
						printf("%s�� �����̰� %d���̴�.\n",
						members[i].name, members[i].age);
					else
						printf("%s�� �����̰� %d���̴�.\n",
						members[i].name, members[i].age);
				break;
				}
			}
			c++;
		}
	}
	else{
		int names[count];
		for(i=0;i<count;i++){
			names[i]=members[i].name[0];
		}
		sort(names,count);
	
		int c=0;
		while (c<count){
			for(i=0;i<count;i++){
				if(members[i].name[0]==names[c]){
					if(members[i].sex=='m')
						printf("%s�� �����̰� %d���̴�.\n",
						members[i].name, members[i].age);
					else
						printf("%s�� �����̰� %d���̴�.\n",
						members[i].name, members[i].age);
				break;
				}
			}
			c++;
		}
		
	}
}

