#include <stdio.h>

int main(){
	char x = 250; 
	int y;	
	y = x + !x + ~x +++x;
	printf("%d", y);
	return 0;
}

//1111 1010
//0000 0101
//0000 0001
//
//0000 0110	==> -6