#include <stdio.h>
//bitfields
struct flag {
	int x : 0;
	int y : 3;
	int z : 2;
};

int main(){
	struct flag f = {10,7,3};	
	printf("%d", sizeof(f));
//	printf("%d %d %d", f.x, f.y, f.z);
	return 0;
}
