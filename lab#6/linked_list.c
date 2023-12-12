#include "linked_list.h"
#include <stdio.h>
#include <stdlib.h>
struct Node *createNode(int data) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode) {
        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}
void insertAtBeginning(struct Node **head, int data) {
    struct Node *newNode = createNode(data);
    if (newNode) {
        newNode->next = *head;
        *head = newNode;
    }
}
void insertAtEnd(struct Node **head, int data) {
    struct Node *newNode = createNode(data);
    if (newNode) {
        if (*head == NULL) {
            *head = newNode;
        } else {
            struct Node *temp = *head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
}
void deleteNode(struct Node **head, int data) {
    struct Node *current = *head;
    struct Node *prev = NULL;

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Node with data %d not found\n", data);
        return;
    }

    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}
void displayList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
void freeList(struct Node *head) {
    struct Node *current = head;
    while (current != NULL) {
        struct Node *next = current->next;
        free(current);
        current = next;
    }
}
