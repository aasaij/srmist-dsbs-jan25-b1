//Program to create  array of structure using dynamic memory allocation
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
typedef struct employee{
	int id; // 4
	char name[30]; // 28
	double salary; // 8
}Employee;
void printStar(int n){
	for (int i = 1; i<=n; i++)
		printf("*");
	printf("\n");
}
int compare(const void* x, const void* y){
	//sorting the employees by their names
//	return strcmp(((Employee*)x)->name,((Employee*)y)->name);
	//sorting the employees by their salaries
	return ((Employee*)y)->salary - ((Employee*)x)->salary;
}

int main(){
	Employee *emps;
	int n;
	scanf("%d", &n);
	emps = (Employee*)calloc(n, sizeof(Employee));
	for (int i = 0; i<n; i++)
		scanf("%d %s %lf", &emps[i].id, emps[i].name,&emps[i].salary);
	//printing heading
	printStar(48);
	printf("Emp ID Employee Name%17s Salary\n", "");
	printStar(48);
	qsort(emps, n, sizeof(Employee), compare);
	for (int i = 0; i<n; i++)
		printf("%6d %-30s %10.2lf\n", emps[i].id, emps[i].name,emps[i].salary);
	printStar(48);		
	
	return 0;
}
