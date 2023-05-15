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

// Function to remove duplicates from the linked list
void removeDuplicates(struct Node* head) {
    if (head == NULL) {
        return;
    }

    struct Node* current = head;

    while (current != NULL) {
        struct Node* temp = current;

        while (temp->next != NULL) {
            if (current->data == temp->next->data) {
                struct Node* duplicateNode = temp->next;
                temp->next = temp->next->next;
                free(duplicateNode);
            } else {
                temp = temp->next;
            }
        }

        current = current->next;
    }
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
    // Create the linked list with duplicates
    struct Node* head = NULL;
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 1);

    // Display the original list
    printf("Original list: ");
    display(head);

    // Remove duplicates
    removeDuplicates(head);

    // Display the list after removing duplicates
    printf("List after removing duplicates: ");
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
$ ./rmv_dup
Original list: 1 5 4 2 3 1 2 3
List after removing duplicates: 1 5 4 2 3
*/