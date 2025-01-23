//Program to demonstrate array of structures
#include<stdio.h>
#include<string.h>
typedef struct employee{
	int id; // 4
	char name[30]; // 28
	double salary; // 8
}Employee;

int main(){
//	printf("%05d", 12345)	;
	Employee e, *sptr;
	sptr = &e;
//	sptr->id = 101;
//	strcpy(sptr->name,"Abishake");
//	sptr->salary = 1200000;
	(*sptr).id = 101;
	strcpy((*sptr).name,"Abishake");
	(*sptr).salary = 1200000;

	printf("%d %s %.2lf", e.id, e.name, e.salary);

	return 0;
}
