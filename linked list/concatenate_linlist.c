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

// Function to concatenate two linked lists
void concatenateLinkedLists(struct Node** list1, struct Node* list2) {
    if (*list1 == NULL) {
        *list1 = list2;
    } else {
        struct Node* current = *list1;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = list2;
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
    // Create the first linked list
    struct Node* list1 = NULL;
    insertAtBeginning(&list1, 3);
    insertAtBeginning(&list1, 2);
    insertAtBeginning(&list1, 1);

    // Create the second linked list
    struct Node* list2 = NULL;
    insertAtBeginning(&list2, 6);
    insertAtBeginning(&list2, 5);
    insertAtBeginning(&list2, 4);

    // Display the original lists
    printf("List 1: ");
    display(list1);
    printf("List 2: ");
    display(list2);

    // Concatenate the linked lists
    concatenateLinkedLists(&list1, list2);

    // Display the concatenated list
    printf("Concatenated list: ");
    display(list1);

    // Free memory
    struct Node* current = list1;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}

/*output:
$ ./concatenate_linlist
List 1: 1 2 3
List 2: 4 5 6
Concatenated list: 1 2 3 4 5 6
*/