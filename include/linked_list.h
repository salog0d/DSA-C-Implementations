struct Node{
        int value;
        struct Node *next;
};

struct Node* head;

void append(int value);
void insertAt(int value, int x);
void insertAtEnd(int value);
void deleteAt(int x);
struct Node* reverseIterative();
void reverseRecursive();
int countNodes();
void detectCycle();
void mergeSorted();
void removeNEnd();
void print();