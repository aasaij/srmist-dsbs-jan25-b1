#include<stdio.h>
#include<string.h>
typedef struct employee{
	int id; // 4
	char name[30]; // 28
	double salary; // 8
}emp;

int main(){
	emp e1;
	e1.id = 1001;
	strcpy(e1.name, "Sidhansu");
	e1.salary = 1000000;
	printf("%d %s %.2lf", e1.id, e1.name, e1.salary);
	
	return 0;
}