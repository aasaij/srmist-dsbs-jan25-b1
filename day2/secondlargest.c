//Program to find second largest element
#include <stdio.h>
#include <limits.h>
int main(){
	int size, max, smax;
	max = smax = INT_MIN;
	scanf("%d", &size);
	int arr[size];
	for(int i = 0; i<size; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i<size; i++)	{
		if (arr[i]>max){
			smax = max;
			max  = arr[i];
		}
		else if (arr[i]> smax && arr[i]!=max ) smax = arr[i];
	}
	if (smax != INT_MIN)
		printf("%d", smax);
	else
		printf("NA");
	
	return 0;
}