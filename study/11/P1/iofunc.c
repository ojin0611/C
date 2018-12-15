//iofunc.c
int a, b, result;
char c;

void myInput(){
	printf("피연산자와 사칙연산자가 포함된 수식을 입력 : ");
	scanf("%d %d %c", &a, &b, &c);
	
}

void myOutput(int a,int b,char c,int result){
	printf("%d %c %d = %d", a, c, b, result);
}
