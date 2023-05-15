#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to insert a node at the beginning of the linked list
void insertAtBeginning(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;
    newNode->next = *head;
    *head = newNode;
}

// Function to delete a node at a given position in the linked list
void deleteNodeAtPosition(struct Node** head, int position) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* current = *head;
    struct Node* prev = NULL;
    int count = 1;

    // Traverse to the specified position
    while (current != NULL && count < position) {
        prev = current;
        current = current->next;
        count++;
    }

    if (current == NULL) {
        printf("Position out of range.\n");
        return;
    }

    // Check if the node to be deleted is the first node
    if (prev == NULL) {
        *head = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
    printf("Node at position %d deleted.\n", position);
}

// Function to display the linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    // Create a sample linked list
    struct Node* head = NULL;
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Display the original list
    printf("Original list: ");
    display(head);

    // Delete node at position 2
    int position = 2;
    deleteNodeAtPosition(&head, position);

    // Display the modified list
    printf("Modified list: ");
    display(head);

    // Free memory
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

/*output:
$ ./delete_postion
Original list: 1 2 3
Node at position 2 deleted.
Modified list: 1 3
*/
