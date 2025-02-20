#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include "linked-list.h"





// // initial the head of the linked list
// IntLinkedListNode* createLinkedList() {
//     IntLinkedListNode* headNode = malloc(sizeof(IntLinkedListNode));
//     return headNode;
// }


IntLinkedListNode* createLinkedList(int initialvalue) {
    IntLinkedListNode* headNode = malloc(sizeof(IntLinkedListNode));
    headNode->next = NULL;
    headNode->value = initialvalue;
    return headNode;
}


void addToIntLinkedListNode(IntLinkedListNode* headNode , int newvalue) {
    IntLinkedListNode* lastNode = headNode;
    IntLinkedListNode* addedNode = malloc(sizeof(IntLinkedListNode));
    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }

    addedNode->value = newvalue;
    addedNode->next = NULL;

    lastNode->next = addedNode;
}


void printIntLinkedListNode(IntLinkedListNode* headNode) {
    IntLinkedListNode* current = headNode;
    printf("linked list: [");
    while (current->next != NULL)
    {
        printf(" %d -" , current->value);
        current = current->next;
    }
    printf(" %d" , current->value);
    printf(" ]\n");
}

int getFromIndexIntLinkedListNode(IntLinkedListNode* headNode , int index) {

    IntLinkedListNode* current = headNode;
    int counter = 0;
    while (current->next != NULL && counter != index)
    {
        current = current->next;
        counter++;
    }
    return current->value;    
}