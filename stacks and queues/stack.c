#include<stdio.h>
#include<stdlib.h>
#define stack_size 10
int s[stack_size];
int top = -1;
void push(int item)
{
	if(top == stack_size -1)
	printf("stack overflow\n");
	top = top+1;
	s[top] = item;
}
int pop()
{
	int item_deleted;

	if(top==-1)
	{
		printf("stack is empty\n");
	return 0;
	}
	item_deleted = s[top--];
//
	return item_deleted;
}
void display()
{
	int i;
	if(top==-1)
	{
	printf("stack is empty");
	}
	printf("contents of the stack\n");
	for(i=0;i<=top;i++)
	printf("%d\n",s[i]);
}
int main()
{
	int choice,item,item_deleted;
	for(;;)
	{
		printf("enter your choice of operation\n1.push\n2.pop\n3.display\n");
		scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		printf("enter the item to be inserted \n");
		scanf("%d",&item);
		push(item);
		break;
	case 2:
		printf("poped item is%d\n",pop());

		break;
	case 3:
		display();
		break;
	default:
		printf("enter a valid function\n");
	}
	}
}
/*output:
$ ./stack
enter your choice of operation
1.push
2.pop
3.display
1
enter the item to be inserted
1
enter your choice of operation
1.push
2.pop
3.display
1
enter the item to be inserted
2
enter your choice of operation
1.push
2.pop
3.display
1
enter the item to be inserted
3
enter your choice of operation
1.push
2.pop
3.display
3
contents of the stack
1
2
3
enter your choice of operation
1.push
2.pop
3.display
2
poped item is3
enter your choice of operation
1.push
2.pop
3.display
3
contents of the stack
1
2
enter your choice of operation
1.push
2.pop
3.display
*/		

