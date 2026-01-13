#include <stdlib.h>
#include <stdio.h> 
#include "linked_list.h"
#include <stdbool.h>

Node *create_node(int value){
    Node *new_node = malloc(sizeof(Node));
    if(!new_node){
        printf("Memory alocation problem\n");
        return NULL;
    }
    new_node->value= value;
    new_node->next= NULL;
    return new_node;
}

int get_size(LinkedList* list) {
    int count = 0;  
    if (list == NULL || list->head == NULL) {
        return count;
    }  
    Node *current = list->head; 
    while (current != NULL) {
        count++;
        current = current->next;
    }   
    return count;
}

bool is_empty(LinkedList* list){
    int count = get_size(list);
    bool empty =True;
    if(count!=0){
        empty = False;
    }
    return empty;
}

void print_list(LinkedList* list){
    int size = get(list);
    if(size==0){
        printf("List is empty");
    }
    Node *current = list->head;
    for(int i=0; i<size; i++){
        printf("%d", current->value);
        current = current->next;
    }
}

void append(LinkedList* list, int value){
    Node *new_node = create_node(value);
    if(!new_node){
        return;
    }
    
}

void prepend(LinkedList* list, int value);
int insert_at(LinkedList* list, int value, int index); 

int delete_front(LinkedList* list);   
int delete_back(LinkedList* list);   
int delete_at(LinkedList* list, int index);  

int get_front(LinkedList* list);      
int get_back(LinkedList* list);      
int get_at(LinkedList* list, int index); 

int contains(LinkedList* list, int value);  
int find(LinkedList* list, int value);      

void reverse(LinkedList* list);

int main(){

    return 0;
}