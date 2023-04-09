#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *lchild,*rchild;
	};
struct node *getnode()
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp->lchild = NULL;
	temp->rchild = NULL;
	return (temp);
}
void insert(struct node *root,struct node *newnode)
{
	if(newnode->data < root->data)
	{
		if(root->lchild==NULL)
		root->lchild = newnode;
	else
		insert(root->lchild,newnode);
	}
	if(newnode->data > root->data)
	{
		if(root->rchild==NULL)
		root->rchild = newnode;
	else
		insert(root->rchild,newnode);
	}
}
void inorder(struct node *temp)
{
	if(temp!=NULL)
	{
		inorder(temp->lchild);
		printf("%d\t",temp->data);
		inorder(temp->rchild);
	}
}
void postorder(struct node *temp)
{
	if(temp!=NULL)
	{
		postorder(temp->lchild);
		postorder(temp->rchild);
		printf("%d\t",temp->data);
	}
}
void preorder(struct node *temp)
{
	if(temp!=NULL)
	{
		printf("%d\t",temp->data);
		preorder(temp->lchild);
		preorder(temp->rchild);
	}
}
int main()
{
	int order,item;
	struct node *root,*newnode;
	root = NULL;
	for(;;)
	{
		printf("\n1.inserting\n2.inorder\n3.post order\n4.pre order\n");	
		printf("enter your choice of operation\n");
		scanf("%d\t",&order);
	switch(order)
	{
		case 1:
			printf("enter the element to be inserted:\n");
			scanf("%d",&item);
			if(root == NULL)
			{
				root = getnode();
				root->data = item;
			}
			else
			{
				newnode = getnode();
				newnode->data = item;
				insert(root,newnode);
			}
			break;
		case 2:
			inorder(root);
			break;
		case 3:
			postorder(root);
			break;
		case 4:
			preorder(root);
			break;
		case 5:
			exit(0);
			default: printf("wrong choice");
			break;
	}
}
}