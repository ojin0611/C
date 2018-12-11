#include <stdio.h>

double totalArea;
int squareArea(int len);
int rectangleArea(int width, int height);
double triangleArea(int width, int height);
double circleArea(int radius);

int main(int argc, char *argv[]) {
	totalArea += squareArea(4);
	totalArea += rectangleArea(5,3);
	totalArea += circleArea(2);
	totalArea += triangleArea(5,3);
	totalArea += squareArea(3);
	totalArea += triangleArea(7,6);
	printf("토지의 총면적 : %f", totalArea); 
	return 0;
}

int squareArea(int len){
	return len * len;
}
int rectangleArea(int width, int height){
	return width * height;
}
double triangleArea(int width, int height){
	return (width * height)/2.0;
}
double circleArea(int radius){
	return radius * radius * 3.14;
}