//iofunc.c
int a, b, result;
char c;

void myInput(){
	printf("�ǿ����ڿ� ��Ģ�����ڰ� ���Ե� ������ �Է� : ");
	scanf("%d %d %c", &a, &b, &c);
	
}

void myOutput(int a,int b,char c,int result){
	printf("%d %c %d = %d", a, c, b, result);
}
