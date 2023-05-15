#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void insertAtPosition(struct Node** head, int data, int position) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;

    if (position == 1) {
        newNode->next = *head;
        *head = newNode;
        return;
    }

    struct Node* temp = *head;
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Invalid position\n");
        return;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void displayList(struct Node* head) {
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Node* head = NULL;

    insertAtPosition(&head, 5, 1);  // Insert 5 at position 1
    insertAtPosition(&head, 10, 2); // Insert 10 at position 2
    insertAtPosition(&head, 15, 3); // Insert 15 at position 3
    insertAtPosition(&head, 20, 2); // Insert 20 at position 2

    printf("Linked list: ");
    displayList(head);

    return 0;
}

/*output:
$ ./insert_position
Linked list: 5 20 10 15

*/