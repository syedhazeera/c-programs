//c program for double linked list
 
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct dnode*llink;
	struct dnode*rlink;
};
typedef struct node* NODE;
NODE head;
NODE getnode()
{
	NODE x;
	x= (NODE)malloc(sizeof(struct node));
	if(x== NULL)
	{
		printf("out of memory");
		return;
	}
return(x);
}
void freenode(NODE x)
{
	free(x);
}
NODE insert_front(int item,NODE head)
{
	NODE temp,cur;
	temp = getnode();
	temp->info=item;
	cur = head->rlink;
	head->rlink = temp;
	temp->rlink=cur;
	return head;
}
NODE delete_front(NODE head)
{
	NODE cur,next;
	if(head->rlink == NULL)
	{
		printf("list is empty\n");
		return(head);
	}
cur= head->rlink;
next = cur->rlink;
head->rlink = next;
printf("node deleted is %d",cur->info);
freenode(cur);
return(head);
}
void display_front(NODE head)
{
	NODE temp;
	if(head->rlink == NULL)
	{
		printf("list is empty");
		return;
	}
	printf("contents of list :\n");
	temp = head->rlink;
	while(temp!=NULL)
	{
		printf("%d\n",temp->info);
		temp = temp->rlink;
	}
}
void display_rear(NODE head)
{
	NODE temp;
	if(head->rlink == NULL)
	{
		printf("list is empty\n");
	}
	temp = head;
	while(temp->rlink == NULL)
		temp = temp->rlink;
	while(temp!=NULL)
	{
		printf("%d\n",temp->info);
		temp = temp->rlink;
	}
}
int main()
{
	NODE temp;
	int list,item;
	head = getnode();
	head->link = NULL;
	for(;;)
	printf("operations on double linked list:\n");
	printf("1.inserting at front\n 2.deleting at front\n 3. display at front\n 4.display at rear\n");
	printf("enter your choice:\n");
	scanf("%d",&list);
switch(list)
{
	case1:
		
		printf("enter the element :\n");
		scanf("%d",&item);
		if(head->rlink == NULL)
		{
			temp=getnode();
			temp->info = item;
			head->rlink = temp;
			temp->rlink = NULL;
		}
		else
		head = insert_front(int item,NODE head);
		break;
	case 2:
		printf("delete item at front");
		scanf("%d",&item);
		delete_front(NODE head);
		break;
	case 3:
		display_front(NODE head);
		break;
	case 4:
		display_rear(NODE head);
		break;
	case 5:
            exit(0);
            default:
            printf ("Wrong choice\n");	
}
}
		
			