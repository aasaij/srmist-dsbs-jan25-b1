#include<stdio.h>
typedef enum boolean {false, true} boolean;

// structure definition
typedef struct employee{
	int id; // 4
	char name[30]; // 28
	double salary; // 8
}emp;

int main(){
//	struct employee e1;
	emp e1;
//	printf("%lu", sizeof(struct employee));
	printf("%lu", sizeof(emp));
	return 0;
}