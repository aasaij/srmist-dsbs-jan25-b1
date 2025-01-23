typedef enum boolan {false, true} boolean;
typedef struct employee{
	int id; // 4
	char name[30]; // 28
	double salary; // 8
}Employee;

typedef struct node {
	Employee emp;
	struct node *nxt;
}Node;
Node* createNode(Employee e){
	Node* temp = (Node*)calloc(1, sizeof(Node));
	temp->emp = e;	
	return temp;
}
//function to insert node in the beginning
Node* addFirst(Node* list, Employee e){
	Node *newNode = createNode(e);
	newNode->nxt = list;
	list = newNode;
	return list;
}
//function to add node in the end of list
Node* addLast(Node* list, Employee e){
	Node *newNode = createNode(e);	
	if(list){
		Node* temp= list;
		while(temp->nxt) temp=temp->nxt;
		temp->nxt = newNode;
		return list;
	}
	return newNode;
}
//function add node into specific location
Node* addAt(Node* list, Employee e, int position){
	if (position == 0 || position == 1)
		return addFirst(list, e);
	if (list && list->nxt && position>1){
		Node* newNode = createNode(e), *temp=list;
		for (int i = 2; i<position && temp->nxt; i++,temp=temp->nxt);
		if (temp->nxt){
			newNode->nxt = temp->nxt;
			temp->nxt = newNode;
		}
	}
	return list;
}
//Function to delete the first element in the list
Node* deleteFirst(Node* list){
	if (list){
		Node* temp = list;
		list = temp->nxt;
		free(temp);
	}
	return list;
}
//Function to delete the last element in the list
Node* deleteLast(Node* list){
	if (list){
		if (list->nxt==NULL){
			free(list);
			return NULL;
		}			
		Node* temp=list;
		while(temp->nxt->nxt)
			temp=temp->nxt;
		free(temp->nxt);
		temp->nxt = NULL;
	}	
	return list;
}
boolean isEqual(Employee e1, Employee e2){
	return e1.id == e2.id && !strcmp(e1.name, e2.name) && e1.salary == e2.salary;
}
void printMenu(){
	printf("\nLinkedList Demo App\n");
	printf("*******************\n");
	printf("1. Add First\n");
	printf("2. Add Last\n");
	printf("3. Add at Location\n");
	printf("4. Delete First\n");
	printf("5. Delete Last\n");
	printf("6. Delete at Location\n");
	printf("7. Search\n");
	printf("8. Find length\n");
	printf("9. Print List\n");
	printf("10. Exit\n");
	printf("Enter your choice : ");
}
Node* deleteAt(Node* list, int position){
	if (position == 0 || position == 1)
		return deleteFirst(list);
	if (list && list->nxt && position > 1){
		Node* temp=list;
		for (int i = 2; i<position && temp->nxt; i++, temp=temp->nxt);
		if (temp->nxt){
			Node *t = temp->nxt;
			temp->nxt = t->nxt;
			free(t);
		}
	}
	return list;
}

Employee* search(Node* list, Employee e){
	if(list){
		for (Node* temp = list; temp; temp=temp->nxt){
			if (isEqual(temp->emp, e)){
				return &(temp->emp);
			}
		}
	}
	return NULL;
}
int findLength(Node* list){
	int cnt = 0;
	if(list){
		for(Node* temp= list; temp; cnt++, temp=temp->nxt);
	}
	return cnt;
}

void printList(Node* list){
	if (list){ //checking whether the list is empty or not
		Node* temp;
		printf("\n[");
		for (temp = list; temp->nxt; temp= temp->nxt)
			printf("{%d,'%s',%.2lf},", temp->emp.id, temp->emp.name, temp->emp.salary);
		printf("{%d,'%s',%.2lf}]\n", temp->emp.id, temp->emp.name, temp->emp.salary);			
	}
	else
		printf("\n[]\n");
}
Employee *getEmployee(){
	Employee *e = (Employee*)calloc(1, sizeof(Employee));
	scanf("%d %s %lf", &e->id, e->name, &e->salary);
	return e;
}
void printEmployee(Employee e){
	printf("Employee ID   : %d\n", e.id);
	printf("Employee Name : %s\n", e.name);
	printf("Salary        : %.2lf\n", e.salary);
}
int getPosition(){
	int x;
	printf("Position : ");
	scanf("%d", &x);
	return x;
}
