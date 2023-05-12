#include <stdio.h>
#include <stdlib.h>

// Define the structure for a linked list node
struct Node {
    int data;
    struct Node* next;
};

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at a given position
void insertAtPosition(struct Node** head, int data, int position) {
    if (position < 1) {
        printf("Invalid position.\n");
        return;
    }

    struct Node* newNode = createNode(data);

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        printf("Inserted %d at position %d.\n", data, position);
        return;
    }

    struct Node* current = *head;
    struct Node* prev = NULL;
    int currentPosition = 1;

    while (current != NULL && currentPosition < position) {
        prev = current;
        current = current->next;
        currentPosition++;
    }

    if (currentPosition != position) {
        printf("Invalid position.\n");
        return;
    }

    newNode->next = current;
    prev->next = newNode;

    printf("Inserted %d at position %d.\n", data, position);
}

// Function to reverse the linked list
void reverse(struct Node** head) {
    struct Node* prev = NULL;
    struct Node* current = *head;
    struct Node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    *head = prev;
}

// Function to display the elements of the linked list
void display(struct Node* head) {
    if (head == NULL) {
        printf("Linked list is empty.\n");
        return;
    }

    struct Node* current = head;
    printf("Linked list elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertAtPosition(&head, 10, 1);
    insertAtPosition(&head, 20, 2);
    insertAtPosition(&head, 30, 3);
    display(head);

    reverse(&head);
    printf("Reversed linked list: ");
    display(head);

    return 0;
}

/*output:
$ ./23_revll_addnode
Inserted 10 at position 1.
Inserted 20 at position 2.
Inserted 30 at position 3.
Linked list elements: 10 20 30
Reversed linked list: Linked list elements: 30 20 10
*/