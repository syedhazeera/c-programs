// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
void insert_beg(struct node** head,int newdata)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = *head;
    *head=newnode;
}
void traverse(struct node* head)
{
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head = head->next;
    }
}
int main() {
    // Write C code here
    int n,i,m;
    struct node* head = NULL;
    printf("how many nodes do u want to enter:");
    scanf("%d",&n);
     
    for(i=0;i<n;i++)
    {
        printf("enter the element:");
        scanf("%d",&m);
        insert_beg(&head,m);
        
    }
   /* insert_beg(&head,5);
    insert_beg(&head,7);
    insert_beg(&head,9);
    insert_beg(&head,6);
    insert_beg(&head,3);*/
    
    traverse(head);
    

    return 0;
}
/*output:
/tmp/hLLZ47ClM6.o
how many nodes do u want to enter:5
enter the element:1
enter the element:2
enter the element:3
enter the element:4
enter the element:5
5
4
3
2
1

*/