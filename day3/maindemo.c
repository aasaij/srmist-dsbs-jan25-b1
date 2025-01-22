#include <stdio.h>

void welcome() __attribute__ ((constructor));
void thank() __attribute__((destructor));
void welcome(){
	printf("Good afternoon to Everyone!\n");
}
void thank(){
	printf("\nThank you so much for being very very silent\n");
}

int main(){
	printf("This is main()\n");
	return 0;
}