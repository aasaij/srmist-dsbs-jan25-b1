#include <stdio.h>

int main(){
	char str[100];// = "Nikhil";
	int n;
	scanf("%s%n", str, &n);
	for (int i = 1; i<=n; i++)
		printf("%*.*s%-*.*s\n",n,i, str,n,i,str);
	
	for (int i = n; i>=1; i--)
		printf("%*.*s%-*.*s\n",n,i, str,n,i,str);
		
	return 0;
}