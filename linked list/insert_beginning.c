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

int main()
{
	struct node* head = NULL;
	
	insert_beginning(&head, 5);
	insert_beginning(&head, 10);
	insert_beginning(&head, 15);
	insert_beginning(&head, 20);
	
	traverse(head);
return 0;
}