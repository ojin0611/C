#include <stdio.h>
int GetOdd( char* data, int data_length )
{
	int i;
	for(i=0;i<data_length;i++){
		if(i%2==0)	printf("%c",data[i]);
	}
}
void main( )
{
	char data[] = "watermelon";
	int data_length = strlen(data);
//	printf("data length = %d\n", data_length);
	
	GetOdd(data, data_length);
	return 0;
}
