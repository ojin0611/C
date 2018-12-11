#include <stdio.h>
int GetStringLength( char* data )
{
	int count = 0;
	while( data[count] ) count++; /* 0이나올때까지문자의개수를더함*/
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
