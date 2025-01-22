#include <stdio.h>

int main(){
	char x, *ptr;
	ptr = &x;
	x = 'A';
	printf("%p\n", ptr);
	*ptr++=100;
	printf("%p\n", ptr);
	printf("%c %c", x, *ptr);
//	printf("%d %d", sizeof(int*), sizeof(char*));
	return 0;
}