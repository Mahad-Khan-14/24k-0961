#include <stdio.h>
int main(){
	int x1 = 5;
	int y1 = 4;
	int x2 = 3;
	int y2 = 2;
	float slope ;
	
	slope = (y2 - y1) / (x2 - x1);
	
	printf("The value of slope is : %.3f", slope);
	
	return 0;
}