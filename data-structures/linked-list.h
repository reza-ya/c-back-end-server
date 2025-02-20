


typedef struct intLinkedListNode IntLinkedListNode;

struct intLinkedListNode {
    int value;
    IntLinkedListNode* next;
};




IntLinkedListNode* createLinkedList(int initialvalue);
void addToIntLinkedListNode(IntLinkedListNode* headNode , int newvalue);
void printIntLinkedListNode(IntLinkedListNode* headNode);
int getFromIndexIntLinkedListNode(IntLinkedListNode* linkedList , int index);
