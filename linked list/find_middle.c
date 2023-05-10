#include<stdio.h>
#include<stdlib.h>
 
struct node{
	int data;
	struct node* next;
};

void insert_beginning(struct node** head,int newdata)
{
	struct node* newnode = (struct node*) malloc(sizeof(struct node));
	newnode->data = newdata;
	newnode->next = *head;
	*head = newnode;
}

void traverse(struct node* head)
{
	while(head!= NULL)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
}

int find_middle(struct node *head)
{
struct node *p,*q;
p=q= head;
while(q->next!=NULL && q->next->next!=NULL)
{
p=p->next;
q=q->next->next;
}
return p->data;
}

int main()
{
	struct node* head = NULL;
	
	insert_beginning(&head, 5);
	insert_beginning(&head, 10);
	insert_beginning(&head, 15);
	insert_beginning(&head, 20);
	insert_beginning(&head, 25);
	traverse(head);
	printf("\nmiddle %d\n",find_middle(head));
return 0;
}

/*output:
LENOVO@DESKTOP-KCFUUP4 ~/linked list
$ ./find_middle
25
20
15
10
5

middle 15
*/