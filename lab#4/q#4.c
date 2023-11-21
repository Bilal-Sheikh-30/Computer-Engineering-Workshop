# include <stdio.h>
# include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
int data;
struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
struct Node* newNode = (struct Node*)malloc(sizeof(struct
Node));
if (newNode == NULL) {
fprintf(stderr, "Memory allocation failed\n");
exit(1);
}
newNode->data = data;
newNode->next = NULL;
return newNode;
}

// Function to insert a node at the beginning of the linked list
struct Node* insertAtBeginning(struct Node* head, int data) {
struct Node* newNode = createNode(data);
newNode->next = head;
return newNode;
}

// Function to print the linked list
void printList(struct Node* head) {
struct Node* current = head;
while (current != NULL) {
printf("%d -> ", current->data);
current = current->next;
}
printf("NULL\n");
}
void deleteOddIndices(struct Node* head){
  int counter = 0;
  int len = 0;
  // calculate length of linked list.
  struct Node* current = head;
  while(current != NULL){
    len++;
    current = current->next;
  }
  struct Node* currentNode = head;
  struct Node* previousNode = NULL;
  for(int i = 0; i < len; i++){
    if(i%2 == 0){
    previousNode = currentNode;
    currentNode = currentNode->next;
    }else{
      previousNode->next = currentNode->next;
      currentNode = currentNode->next;
    }
  }
}

int main() {
  struct Node* head = NULL;

  // Insert nodes at the beginning
  head = insertAtBeginning(head, 5);
  head = insertAtBeginning(head, 4);
  head = insertAtBeginning(head, 3);
  head = insertAtBeginning(head, 2);
  head = insertAtBeginning(head, 1);

  deleteOddIndices(head);
  printf("Linked List: ");
  printList(head);
  return 0;
}