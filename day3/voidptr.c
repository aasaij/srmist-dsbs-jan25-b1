#include <stdio.h>

int main(){
	int x = 10, y =20;
	float f = 10.5;
	char c = 'A';
	void *ptr;  //General purpose pointer
	ptr = &x; // ptr is pointing an integer 	
	printf("%d\n", *(int*)ptr);
	ptr = &y;
	printf("%d\n", *(int*)ptr);
	ptr = &f;  // ptr is pointing a float
	printf("%f\n", *(float*)ptr);
	ptr = &c;
	printf("%c\n", *(char*)ptr);
	return 0;
}