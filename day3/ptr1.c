#include <stdio.h>

int main(){
	int x, *ptr;
	ptr = &x;
	x = 100;
	printf("%p\n", ptr);
	*ptr++=200;
	printf("%p\n", ptr);
	printf("%d %d", x, *ptr);
//	printf("%d %d", sizeof(int*), sizeof(char*));
	return 0;
}