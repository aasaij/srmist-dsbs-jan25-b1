//Program to print day of Date
#include <stdio.h>
#include <stdbool.h>
bool isLeapYear(int year){
	return (year % 400 == 0 || ( year % 4 == 0 && year % 100 != 0));
}
bool isValid(int d, int m, int y){
	if (d > 31 || d < 1 || m > 12 ||m < 1 || y < 1900)
		return false;
	switch(m){
		case 4: case 6: case 9: case 11:
			if (d > 30)
				return false;
			break;
		case 2:
			if (isLeapYear(y)){
				if ( d > 29)
					return false;
			}
			else if ( d > 28) return false;				
	}
	return true;
}

int main(){
	int dd, mm, yy;
	scanf("%d/%d/%d", &dd, &mm, &yy);
	if (isValid(dd, mm,yy)){
		int f, D, C;
		if ( mm== 1 || mm == 2){
			mm+=10;
			yy--;
		}
		else
			mm-=2;
		C  = yy / 100;
		D = yy % 100;
		f = (dd + (13*mm-1)/5+D+D/4+C/4-2*C)%7;
//		f = (dd +(13*mm-1)/5+D+D/4+C/4–2*C)%7;
		if ( f < 0) f +=7;
		switch(f){
			case 0:
				printf("Sunday"); break;
			case 1:
				printf("Monday"); break;
			case 2:
				printf("Tuesday"); break;
			case 3:
				printf("Wednesday"); break;
			case 4:
				printf("Thursday"); break;
			case 5:
				printf("Friday"); break;
			case 6:
				printf("Saturday");			
		}
	}
	else
		printf("Invalid");
	
	return 0;
}