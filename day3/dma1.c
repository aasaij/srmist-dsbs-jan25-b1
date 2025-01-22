//Program to print unique elements of list
#include <stdio.h>
#include <stdlib.h>
int main(){
	int n, *arr;	
	scanf("%d", &n); // 5
//	arr = (int*)malloc(n * sizeof(int));
	arr = (int*)calloc(n, sizeof(int));
	for (int i = 0;i<n; scanf("%d", arr+i++));
	for (int i = 0; i<n; i++){
		int found = 0;
		for (int j = 0; j<i; j++)
			if ( arr[i]==arr[j]){
				found = 1;
				break;
			}
		if (!found)
			printf("%d ", arr[i]);
	}
	free(arr);
	return 0;
}