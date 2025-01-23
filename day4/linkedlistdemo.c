//Program to demonstrate linked list
#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#include <linkedlist.h>

int main(){
	Node* root = NULL;
	while(1){
		int choice;
		printMenu();
		scanf("%d", &choice);
		switch(choice){
			default:
				printf("Thank you for being very interactive!");
				exit(0); //Terminate the application
			case 1:
				root = addFirst(root, *getEmployee());break;
			case 2:
				root = addLast(root, *getEmployee());break;
			case 3:
				root = addAt(root, *getEmployee(),getPosition()); break;
			case 4:
				root = deleteFirst(root);break;
			case 5:
				root = deleteLast(root);break;
			case 6:
				root = deleteAt(root, getPosition()); break;
			case 7:{
				Employee *e = search(root, *getEmployee());
				if (e)
					printEmployee(*e);
				else
					printf("Not found!");				
				break;
			}
			case 8:
				printf("%d\n", findLength(root));break;
			case 9:
				printList(root);				
		}
	}
	return 0;
}
