//Program to search an element in a list using pointers 
#include <stdio.h>

int main(){
	int arr[] = {10,20,30, 12,13,4,5,7,8,82}, searchElement;
	int *ptr = arr;
	int size = sizeof(arr)/sizeof(arr[0]);
//	arr++;
	ptr++;
	printf("%d", *(arr+2));
//	scanf("%d", &searchElement)
	return 0;
}