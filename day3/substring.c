#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
char* slice(const char s[], int startIndex, int numChars){
	char *substr;
	substr =(char *) calloc(numChars+1, sizeof(char));
	int i, j;
      	for (i = startIndex, j = 0;j<numChars && s[i]!='\0';i++, j++)
		substr[j] = s[i];
	return substr;
}
char* toggleCase(const char *str){	
	int len;
	char *res;
	//Finding string length
	for (len = 0; str[len]; len++);
	res = (char*)calloc(len+1, sizeof(char));
	for (int i = 0; str[i];i++){
		if (islower(str[i]))
			res[i] = toupper(str[i]);
		else if (isupper(str[i]))
			res[i] = tolower(str[i]);
		else
			res[i] = str[i];
	}
	return res;	
}
int main(){
//	printf("%s", slice("Sidhansu", 4, 30)); // ans
	printf("%s", toggleCase("LakShaY@123")); //lAKsHAy@123
	return 0;	
}
