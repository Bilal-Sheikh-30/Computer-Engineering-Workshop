#ifndef LINKED_LIST_H
#define LINKED_LIST_H
struct Node {
    int data;
    struct Node *next;
};
struct Node *createNode(int data);
void insertAtBeginning(struct Node **head, int data);
void insertAtEnd(struct Node **head, int data);
void deleteNode(struct Node **head, int data);
void displayList(struct Node *head);
void freeList(struct Node *head);

#endif