typedef struct{
    int data;
    Node* next;
}Node;

typedef struct {
    Node* head;
    Node* tail;     
} LinkedList;

LinkedList* create_list();
void destroy_list(LinkedList* list);

void append(LinkedList* list, int value);
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

int get_size(LinkedList* list);
int is_empty(LinkedList* list);
void reverse(LinkedList* list);
void print_list(LinkedList* list);