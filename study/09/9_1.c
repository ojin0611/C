#include <stdio.h>
int GetStringLength( char* data )
{
	int count = 0;
	while( data[count] ) count++; /* 0�̳��ö����������ǰ���������*/
	return count;
}
void main( )
{
	int data_length;
	char data[10] = "happy";
	data_length= GetStringLength(data);
	printf("data length = %d\n", data_length);
	return 0;
}
