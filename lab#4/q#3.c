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
    struct Node *newNode = (struct Node *)malloc(sizeof(struct
                                                        Node));
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

void convertToArray(struct Node *head)
{
    int len = 0;
    struct Node *current = head;
    while (current != NULL)
    {
        len++;
        current = current->next;
    }
    int nodeArray[len];
    for (int i = 0; i < len; i++)
    {
        nodeArray[i] = head->data;
        head = head->next;
    }
    printf("values in the array are as follow: \n");
    for (int i = 0; i < len; i++)
    {
        printf("value at %d is: %d\n", i + 1, nodeArray[i]);
    }
    return;
}

int main()
{
    struct Node *head1 = NULL;

    head1 = insertAtBeginning(head1, 3);
    head1 = insertAtBeginning(head1, 2);
    head1 = insertAtBeginning(head1, 10);
    convertToArray(head1);
    return 1;
}