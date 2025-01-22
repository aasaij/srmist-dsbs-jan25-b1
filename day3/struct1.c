#include <stdio.h>
struct flag {
	int x : 4;
	int y : 3;
	int z : 2;
};

int main(){
	struct flag f = {10,7,3};	
	
	printf("%d %d %d", f.x, f.y, f.z);
	return 0;
}