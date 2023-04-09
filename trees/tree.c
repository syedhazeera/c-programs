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
/*output:
$ ./tree

1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
1
25
enter the element to be inserted:

1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
1
15
enter the element to be inserted:

1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
1
43
enter the element to be inserted:

1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
1
30
enter the element to be inserted:

1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
1
46
enter the element to be inserted:

1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
1
9
enter the element to be inserted:

1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
1
17
enter the element to be inserted:

1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
2
5
9       15      17      25      30      43      46
1.inserting
2.inorder
3.post order
4.pre order
enter your choice of operation
*/
