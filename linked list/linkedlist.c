// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert_beg(struct node** head,int newdata)
{
    struct node * newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = *head;
    *head = newnode;
}
void traverse(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}
void del_beg(struct node** head)
{
    if(*head==NULL)
    {
        printf("list is empty");
       // return;
    }
    struct node * temp = *head;
    *head =(*head)->next;
    free(temp);
    printf("first node is deleted\n");
}
void display(struct node* head)
{
    if(head==NULL)
    {
        printf("list is empty");
        return;
    }
    struct node* cur = head;
    while(cur!=NULL)
    {
        printf("%d\n",cur->data);
            cur = cur->next;
    }

}
void reverse(struct node** head)
{
    struct node* next = NULL;
    struct node* cur = *head;
    struct node* prev = NULL;
    while(cur!=NULL)
    {
        next =  cur->next;
        cur->next = prev;
        prev=cur;
        cur = next;
        
    }
    printf("\n");
    *head = prev;
        
    
}
void sort(struct node* head)
{
    struct node*p = NULL;
    struct node*q = NULL;
    int temp=0;
    for(p=head;p->next != NULL;p=p->next)
    {
        for(q=p;q!=NULL;q=q->next)
        {
            if(p->data > q->data)
            {
            temp = p->data;
            p->data = q->data;
            q->data=temp;
            }
    
        }
        }
}
struct node* search(struct Node* head, int key) {
    struct node* cur = head;

    // Traverse the linked list
    while (cur!= NULL) 
    {
        // If the key is found, return the node
        if(cur->data == key)
        {
            return cur;
        }
        cur = cur->next;
    }

    // If the key is not found, return NULL
    return NULL;
}

int find_mid(struct node* head)
{
    struct node*p,*q;
    p=q=head;
    while(q->next!=NULL && q->next->next!=NULL)
    {
        p=p->next;
        q=q->next->next;
    }
    return p->data;
}

int main() 
{
    struct node* head = NULL;    // Write C code here
    
    insert_beg(&head,45);
    insert_beg(&head,7);
    insert_beg(&head,90);
    insert_beg(&head,2);
    insert_beg(&head,5);
    insert_beg(&head,78);
    traverse(head);
    int key = 8;
    // Search for an element in the linked list
    struct Node* result = search(head, key);

    if (result != NULL) {
        printf("Element %d found in the linked list.\n", key);
    } else {
        printf("Element %d not found in the linked list.\n", key);
    }

   // printf("\n middle element is%d \n", find_mid(head));
    
   // printf("\nlist after sorting is\n ");
//    sort(head);
    
    //printf("\nreverse linklist is ");
    //reverse(&head);
  //  traverse(head);
    
    //display(head);
    //del_beg(&head);
    //display(head);
    
    return 0;
}

/*
output:
78
5
2
90
7
45
Element 8 not found in the linked list.

*/