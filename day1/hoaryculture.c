// Program to solve hoary culture problem
#include <stdio.h>

int main(){
	int x, y, dist = 10, n;
	char dir = 'R';
	x=y=0;
	scanf("%d", &n);
	while(n--){
		switch(dir){
			case 'R':
				x += dist; dir = 'U'; break;
			case 'U':
				y+=dist; dir = 'L'; break;
			case 'L':
				x-=dist; dir = 'D'; break;
			case 'D':
				y -=dist; dir = 'A'; break;
			case 'A':
				x+=dist; dir = 'R'; 
		}
		dist +=10;
	}
	printf("%d,%d", x, y);
	return 0;
}