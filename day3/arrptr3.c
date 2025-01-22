//Program to search an element in a list using pointers 
#include <stdio.h>

int main(){
	int arr[] = {10,20,30, 12,13,4,5,7,8,82}, searchElement;
	int *ptr = arr+3;

	printf("%d %d %d", ptr[-5], ptr[0], ptr[15]);
	return 0;
}

Dynamic Memory Allocation
stdlib.h
	malloc()
	
	void* malloc(size_t numBytes);	
	
	calloc()
	
	void* calloc(size_t numBlocks, size_t blockSize);
	
	realloc()
	void* realloc(void* oldBlock, size_t newSize);
	
	
	free()
	
	void free(void* oldBlock);
