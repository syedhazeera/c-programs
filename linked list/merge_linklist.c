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

// Function to merge two sorted linked lists in ascending order
struct Node* mergeLinkedLists(struct Node* list1, struct Node* list2) {
    if (list1 == NULL) {
        return list2;
    }
    if (list2 == NULL) {
        return list1;
    }

    struct Node* mergedList = NULL;

    if (list1->data <= list2->data) {
        mergedList = list1;
        mergedList->next = mergeLinkedLists(list1->next, list2);
    } else {
        mergedList = list2;
        mergedList->next = mergeLinkedLists(list1, list2->next);
    }

    return mergedList;
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
    insertAtBeginning(&list1, 5);
    insertAtBeginning(&list1, 3);
    insertAtBeginning(&list1, 1);

    // Create the second linked list
    struct Node* list2 = NULL;
    insertAtBeginning(&list2, 6);
    insertAtBeginning(&list2, 4);
    insertAtBeginning(&list2, 2);

    // Display the original lists
    printf("List 1: ");
    display(list1);
    printf("List 2: ");
    display(list2);

    // Merge the linked lists
    struct Node* mergedList = mergeLinkedLists(list1, list2);

    // Display the merged list
    printf("Merged list: ");
    display(mergedList);

    // Free memory
    struct Node* current = mergedList;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }

    return 0;
}


/*output:
$ ./merge_linklist
List 1: 1 3 5
List 2: 2 4 6
Merged list: 1 2 3 4 5 6
*/