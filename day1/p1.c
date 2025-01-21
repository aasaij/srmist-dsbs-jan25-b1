#include <stdio.h>

#include <math.h>
int main(){
//	printf("%d",019);	
//	printf("%hi", 010);
//	printf("%f", 10/4);
//	printf("%g", 10/4.0);
//	printf("%f", 10.5 % 4);// error
	printf("%f", fmod(10.5,4));// error
	return 0;
}

//input  1
//10 3
//output 1
//13
//
//input 2
//10.5 4
//
//output 2
//
//14.5



