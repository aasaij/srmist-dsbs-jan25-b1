//input
//2300
//4
//100 200 500 50
//
//output
//500 x 4 = 2000
//200 x 1 =  200
//100 x 1 =  100
#include <stdio.h>
#include<stdlib.h>
int compare(const void *x, const void* y){
	return *(int*)y - *(int*)x;
}

int main(){
	int amt, n;
	scanf("%d", &amt);
	scanf("%d", &n);
	int denom[n];
	for (int i = 0; i<n; i++)
		scanf("%d", &denom[i]);
	qsort(denom,n, sizeof(denom[0]), compare);
	if (amt >= denom[n-1] && amt % denom[n-1]==0){
		for (int i = 0; i<n && amt != 0; i++){
			if (amt < denom[i]) continue;
			printf("%d X %d=%d\n",
			   denom[i],amt/denom[i],denom[i]*(amt/denom[i]));
			amt = amt % denom[i];
		}
	}
	else
		printf("-1");
	return 0;
}


