#include <stdio.h>

int main(){
	int x, *ptr;
	ptr = &x;
	x = 100;
	*++ptr=200; //segmentation error
	
//	printf("%d %d", sizeof(int*), sizeof(char*));
	return 0;
}