//Program to check whether the given number is prime  or not
#include <stdio.h>
#include<math.h>
int main(){
	int x;
	scanf("%d", &x);
	for (int i = 2; i<=sqrt(x); i++){
		if ( x % i == 0){
			printf("Not prime");
			return 0;
		}
	}
	printf("Prime");	
	return 0;
}

//11 ==> 6 x 2 - 1
//23 ==> 6 x 4 - 1

