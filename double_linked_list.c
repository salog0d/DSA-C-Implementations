#include <stdlib.h>
#include <stdio.h>

struct Node{
        int value;
        struct Node *next;
        struct Node *previous;
};

struct Node* head;

void append(int value){
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->value=value;
        newNode->previous=NULL;
        newNode->next=NULL;
        if(head != NULL) newNode->next = head;
        head = newNode;
}

void insertAt(int value, int x){

}

void insertAtEnd(int value){

}

void deleteAt(int x){

}

void reverseIterative(){


}

void reverseRecursive(){

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

}

int main(){

	return 0;
}
