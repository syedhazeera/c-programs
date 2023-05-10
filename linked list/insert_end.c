/*inserting at end of link list:
Create a new node with the given element.
If the linked list is empty, make the new node the head of the list and return.
Traverse the linked list until you reach the last node.
Set the next pointer of the last node to point to the new node.
Set the next pointer of the new node to NULL, indicating it is the last node.
Done*/

#include <stdio.h>
#include <stdlib.h>

// Define the structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};

// Function to insert an element at the end of the linked list
void insertAtEnd(struct Node** head, int element) {
    // Create a new node
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = element;
    newNode->next = NULL;

    // If the linked list is empty, make the new node the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Traverse the linked list to find the last node
    struct Node* current = *head;
    while (current->next != NULL) {
        current = current->next;
    }

    // Set the next pointer of the last node to the new node
    current->next = newNode;
}

// Function to print the linked list
void printLinkedList(struct Node* head) {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

// Test the code
int main() {
    struct Node* head = NULL;

    // Insert elements at the end of the linked list
    insertAtEnd(&head, 10);
    insertAtEnd(&head, 20);
    insertAtEnd(&head, 30);

    // Print the linked list
    printf("Linked list: ");
    printLinkedList(head);

    return 0;
}

/*output:
$ ./insert_end
Linked list: 10 20 30

*/





