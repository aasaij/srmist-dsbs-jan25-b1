//Program to print X pattern
#include <stdio.h>

int main(){
	char str[100]; // "neel"
	int len;
	scanf("%s%n", str, &len);
	for(int i = 1; i<len; i++)
		printf("%*c%*c\n",i,str[i-1],len*2-(i*2), str[i-1] );	
	printf("%*c\n", len, str[len-1]);
	for(int i = len-1; i>=1; i--)
		printf("%*c%*c\n",i,str[i-1],len*2-(i*2), str[i-1] );
	
	return 0;
}