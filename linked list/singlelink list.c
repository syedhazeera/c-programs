#include <stdio.h>
#include<stdlib.h>
struct node{
    int info;
    struct node*link;
    };
    typedef struct node*NODE;
NODE getnode()
{
    NODE x;
    x = (NODE) malloc(sizeof(struct node));
    if(x==NULL)
    {
        printf("out of memory");
        return 0;
    }
}
void free_node(NODE x)
{
    free(x);
}
NODE insert_front(int item,NODE first)
{
    NODE temp;
    temp = getnode();
    temp->info = item;
    temp->link = first;
    return temp;
}
int delete_front(NODE first)
{
    NODE temp;
    if(first = NULL)
    {
        printf("list empty:\n");
        return;
    }
    temp = first;
    temp = temp->link;
    printf("item deleted = %d",first->info);
    free_node(first);
    return(temp);
}
void display(NODE first)
{
    NODE temp;
    if(first == NULL)
    {
        printf("list empty:\n");
        return 0;
    }
    printf("elements of list are:\n");
    temp = first;
    while(temp!=NULL)
    {
        printf("%d",temp->info);
        temp = temp->link;
    }
}
int main()
{
    NODE first;
    int temp,list,key,item;
    first = NULL;
    for(;;)
    {
        printf("operations on linked list are:\n1.inserting at front end\n2.deleting at front end\n3.display\n");
        printf("enter your choice of operation\n");
        scanf("%d",&list);
switch(list)
{
    case 1:
        printf("enter the element:\n");
        scanf("%d",&item);
        if(first == NULL)
        {
            first->info = item;
        }
        else
            first = insert_front(item,first);
        break;
    case 2:
        first = delete_front(first);
        break;
    case 3:
        display(first);
        break;
    case 4:
     exit(0);
     printf("enter the valid input");
     
}
    
}
return 0;
}
