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

// Function to split the linked list into two halves
void splitLinkedList(struct Node* head, struct Node** firstHalf, struct Node** secondHalf) {
    if (head == NULL || head->next == NULL) {
        *firstHalf = head;
        *secondHalf = NULL;
        return;
    }

    struct Node* p = head;
    struct Node* q = head->next;

    while (q != NULL) {
        q = q->next;
        if (q != NULL) {
            p = p->next;
            q = q->next;
        }
    }

    *firstHalf = head;
    *secondHalf = p->next;
    p->next = NULL;
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
    // Create the linked list
    struct Node* head = NULL;
    insertAtBeginning(&head, 6);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 4);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Display the original list
    printf("Original list: ");
    display(head);

    // Split the linked list
    struct Node* firstHalf = NULL;
    struct Node* secondHalf = NULL;
    splitLinkedList(head, &firstHalf, &secondHalf);

    // Display the first half of the list
    printf("First half: ");
    display(firstHalf);

    // Display the second half of the list
    printf("Second half: ");
    display(secondHalf);

    // Free memory
    struct Node* current = firstHalf;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    current = secondHalf;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

/*output:
$ ./split_linklist
Original list: 1 2 3 4 5 6
First half: 1 2 3
Second half: 4 5 6
*/
