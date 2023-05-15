#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node* next;
};

// Function to delete the last node of the linked list
void deleteLastNode(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* current = *head;
    struct Node* prev = NULL;

    // Traverse to the last node
    while (current->next != NULL) {
        prev = current;
        current = current->next;
    }

    // Check if the list has only one node
    if (prev == NULL) {
        free(*head);
        *head = NULL;
    } else {
        prev->next = NULL;
        free(current);
    }

    printf("Last node deleted.\n");
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
    struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    struct Node* second = (struct Node*)malloc(sizeof(struct Node));
    struct Node* third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;

    // Display the original list
    printf("Original list: ");
    display(head);

    // Delete the last node
    deleteLastNode(&head);

    // Display the modified list
    printf("Modified list: ");
    display(head);

    // Free memory
    free(head);
    free(second);
    free(third);

    return 0;
}

/*output:
$ ./delete_lastnode
Original list: 1 2 3
Last node deleted.
Modified list: 1 2
*/
