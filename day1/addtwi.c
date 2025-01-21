//Program to add two numbers
#include <stdio.h>

int main(){
	float n1,n2, sum;
	scanf("%f %f", &n1, &n2);
	sum = n1 + n2;
	if (sum == (int)sum)
		printf("%d", (int)sum);
	else
		printf("%.2f", sum);
	return 0;
}