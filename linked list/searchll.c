#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    
};
void write(struct node** head,int newdata)
{
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = newdata;
    newnode->next = *head;
    *head = newnode;
    
}
void read(struct node*head)
{
    while(head!=NULL)
    {
        printf("%d\n",head->data);
        head=head->next;
    }
}
void search(int key,struct node *head)
{
    struct node * cur;
    if(head == NULL)
    {
        printf("list empty");
        return;
    }
    cur = head;
    while(cur!=NULL)
    {
        if(key == cur->data)
        break;
        cur = cur->next;
    }
   
    
    if(cur == NULL)
    {
        printf("search is unsucessful");
        return;
    }
   // printf("search is successful");
    
    if(cur == NULL)
    printf("search is unsucessful");
    else
    printf("search is successful and the value of key is  %d ",key);
    
    
}
int main()
{
    struct node* head = NULL;
    write(&head,1);
    write(&head,2);
    write(&head,3);
    write(&head,4);
    read(head);
    search(3,head);
    
}

/*output:
4
3
2
1
search is successful and the value of key is  3 
*/