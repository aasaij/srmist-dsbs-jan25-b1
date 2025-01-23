//Program to create  array of structure using dynamic memory allocation
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct employee{
	int id; // 4
	char name[30]; // 28
	double salary; // 8
}Employee;

int main(){
	Employee *emps;
//	emps = (Employee *)malloc(sizeof(Employee));
	emps = (Employee *)calloc(1,sizeof(Employee));
    emps->id = 101;
    strcpy(emps->name, "Sarah");
    emps->salary = 1200000;	
	printf("%d %s %.2lf", emps->id, emps->name, emps->salary);
	return 0;
}
