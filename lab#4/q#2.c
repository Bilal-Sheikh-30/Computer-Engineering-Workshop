#include <stdio.h>
#include <stdlib.h>
// Define a structure for a node in the linked list
struct Node
{
    int data;
    struct Node *next;
};

// Function to create a new node
struct Node *createNode(int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the beginning of the linked list
struct Node *insertAtBeginning(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    newNode->next = head;
    return newNode;
}

// Function to insert a node at the end of the linked list
struct Node *insertAtEnd(struct Node *head, int data)
{
    struct Node *newNode = createNode(data);
    if (head == NULL)
    {
        return newNode;
    }
    struct Node *current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = newNode;
    return head;
}

// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void mergeList(struct Node *head1, struct Node *head2)
{
    struct Node *mergedList = NULL;
    while (head1 != NULL && head2 != NULL)
    {
        if (head1->data < head2->data)
        {
            mergedList = insertAtEnd(mergedList, head1->data);
            head1 = head1->next;
        }
        else
        {
            mergedList = insertAtEnd(mergedList, head2->data);
            head2 = head2->next;
        }
    }

    // If there are remaining nodes in either list, add them to the merged list
    while (head1 != NULL)
    {
        mergedList = insertAtEnd(mergedList, head1->data);
        head1 = head1->next;
    }
    while (head2 != NULL)
    {
        mergedList = insertAtEnd(mergedList, head2->data);
        head2 = head2->next;
    }

    printList(mergedList);
}

int main()
{
    struct Node *head1 = NULL;

    // Insert nodes at the beginning
    head1 = insertAtBeginning(head1, 3);
    head1 = insertAtBeginning(head1, 2);
    head1 = insertAtBeginning(head1, 1);

    struct Node *head2 = NULL;

    // Insert nodes at the beginning
    head2 = insertAtBeginning(head2, 7);
    head2 = insertAtBeginning(head2, 6);
    head2 = insertAtBeginning(head2, 5);
    head2 = insertAtBeginning(head2, 4);

    printf("list#1: ");
    printList(head1);

    printf("\nlist#2: ");
    printList(head2);

    printf("\nMerged list: ");
    mergeList(head1, head2);

    return 1;
}