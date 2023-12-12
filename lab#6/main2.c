#include "linked_list.h"
#include <stdio.h>

int main() {
    struct Node *head = NULL;
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    printf("Linked List after inserting at the beginning:\n");
    displayList(head);
    insertAtEnd(&head, 4);
    insertAtEnd(&head, 5);
    printf("Linked List after inserting at the end:\n");
    displayList(head);
    deleteNode(&head, 3);
    printf("Linked List after deleting a node:\n");
    displayList(head);
    freeList(head);

    return 0;
}
