#include <stdio.h>
// 매크로 변수 정의 
#define MAX 100
#define PI 3.14
#define STRING "Hello C"
#define OUTPUT printf
#define DATA int

// 매크로 함수 정의 
#define MUL(x,y) x*y
#define getSTR(s) #s // #의 기능 : 문자열로 출력해준다. 


int main(void){
	// 매크로 변수 사용 & 선언 해제 
	DATA a=3;
	OUTPUT("%d, %lf, %s, %d \n",MAX, PI, STRING, a);	
	
	#undef PI
	#undef STRING
	
	double PI = 3.141592;
	#define STRING "Hello Dev-C++"

	OUTPUT("%d, %lf, %s, %d \n",MAX, PI, STRING, a);
	printf("--------------------------------\n");
	
	// 매크로 함수 사용
	int b =4;
	printf("%d*%d = %d\n",a,b, MUL(a,b)); 
	printf("%d+1*%d+1 = %d\n",a,b, MUL(a+1,b+1)); 
	printf("getSTR 결과 : %s, %s\n",getSTR(PI),getSTR(5+2));
	
	printf("--------------------------------\n");
	// 미리 정의된 매크로
	printf("파일 이름 : %s\n",__FILE__); 
	printf("현재 행 번호 : %d\n",__LINE__); 
	printf("컴파일 날짜 : %s\n",__DATE__); 
	printf("컴파일 시간 : %s\n",__TIME__); 
	
	printf("--------------------------------\n");
	// 조건부 매크로 
	/*
	#undef MAX
	#define MAX 1000
	*/
	#if (MAX == 100)
	OUTPUT("#if문 내의 MAX 값 = %d\n",MAX);
	#elif (MAX==1000)
	OUTPUT("#if문 내의 MAX 값 = %d\n",MAX);
	#else
	OUTPUT("#if 안의 MAX는 100 또는 1000 이 아닙니다.\n");
	#endif
	
	printf("--------------------------------\n");
	#ifdef PI
	OUTPUT("PI가 매크로변수로 선언돼있습니다.\n");
	#else
	OUTPUT("PI가 매크로변수로 선언돼있지 않습니다.\n");
	#endif
	
	return 0;
}


