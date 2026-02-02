#include <stdlib.h>
#include <stdio.h>

struct Node{
        int value;
        struct Node *next;
};

struct Node* head;

void append(int value){
        struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
        temp->value = value;
        temp->next = NULL;
        if(head != NULL) temp->next = head;
        head = temp;
}

void insertAt(int value, int x){
	//Check for negative indexes
	if(x<0){
		printf("Cant handle negative indexes\n");
		printf("Please enter a valid value\n");
	}
	//Insert at beginnig
	if(x==0){
		struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
		temp->value=value;
		temp->next=head;
		head = temp;
		return;
	}
	struct Node* prev = head;
	for(int i=0; i<x-1;i++){
		if(prev->next==NULL){
			printf("Index overflow\n");
			return;
		}
		prev = prev->next;
	}
	struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
	temp->value=value;
	temp->next=prev->next;
	prev->next=temp;
	return;
}

void insertAtEnd(int value){
	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
	newNode->value=value;
	newNode->next=NULL;
	if(head==NULL){
		head=newNode;
		return;
	}
	struct Node* temp = head;
	while(temp->next!=NULL){
		temp=temp->next;
	}
	temp->next=newNode;
}

void deleteAt(int x){
	if(x<0){
		printf("Cant handle negative indexes\n");
		printf("Please enter a valid value\n");
		return;
	}

	if(head==NULL){
		printf("List is empty\n");
		return;
	}

	struct Node* temp = head;
	for(int i = 0; i<x-1; i++){
		if(temp==NULL){
			printf("Index overflow\n");
		}
		temp=temp->next;
	}

	temp->next= temp->next->next;
	return;
}

struct Node* reverseIterative(){
	if(head==NULL){
		printf("List is empty\n");
		return head;
	}

	struct Node* next = head;
	struct Node* current = head;
	struct Node* prev = NULL;
	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	return head;
}

void reverseRecursive(struct Node* p){
	if(p->next == NULL){
		head=p;
		return;
	}
	reverseRecursive(p->next);
	struct Node* q = p->next;
	q->next = p;
	p->next = NULL;
}

void countNodes(){

}

void detectCicle(){
	//Use FFloyds Cycle finding algorithm
}

void mergeSorted(){

}

void removeNEnd(){

}

void print(){
        printf("List is:\n");
        if(head != NULL){
                struct Node *temp = head;
                while(temp != NULL){
                        printf(" %d\n",temp->value);
                        temp = temp->next;
                }
        printf("\n");
        }
}

int main(){
        head = NULL;
        printf("How many values you want to store?\n");
        int x,c,i;
        scanf("%d",&x);
        for(i=0;i<x;i++){
                printf("Insert value\n");
		scanf("%d",&c);
                append(c);
                print();
        }
	printf("In which index you want to insert a value\n");
	int z,y;
	scanf("%d",&y);
	printf("Which is the value\n");
	scanf("%d",&z);
	insertAt(z,y);
	print();
	printf("Insert the index you want to delete\n");
	int d;
	scanf("%d", &d);
	deleteAt(d);
	print();
	return 0;
}
