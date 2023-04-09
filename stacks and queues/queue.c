#include<stdio.h>
#define queue_size 10
int q[queue_size];
int f=0,r=-1;
void insert(int item)
{
	if(r==queue_size-1)
	{
		printf("queue overflow\n");
		return;
	}
	r = r+1;
	q[r] = item;
}
void delete()
{
	if(f>r)
	{
		printf("queue underflow\n");
		f=0;r=-1;
	}
	printf("element deleted is %d\n",q[f++]);
}
void display()
{
	int i;
	printf("queue:\n");
	for(i=f;i<=r;i++)
	printf("contents of the queue are %d\n",q[i]);
}
int main()
{
	int choice,item;
	for(;;)
	{
		printf("enter the choice of operation\n1.insert\n2.delete\n3.display\n");
		scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("enter the item\n");
			scanf("%d",&item);
			insert(item);
			break;
		case 2:
			delete();
			break;
		case 3:
			display();
			break;
		default:
			printf("enter valid input\n");
	}
	}
}
/*output:
$ ./queue
enter the choice of operation
1.insert
2.delete
3.display
1
enter the item
1
enter the choice of operation
1.insert
2.delete
3.display
1
enter the item
2
enter the choice of operation
1.insert
2.delete
3.display
1
enter the item
3
enter the choice of operation
1.insert
2.delete
3.display
1
enter the item
4
enter the choice of operation
1.insert
2.delete
3.display
3
queue:
contents of the queue are 1
contents of the queue are 2
contents of the queue are 3
contents of the queue are 4
enter the choice of operation
1.insert
2.delete
3.display
2
element deleted is 1
enter the choice of operation
1.insert
2.delete
3.display
3
queue:
contents of the queue are 2
contents of the queue are 3
contents of the queue are 4
enter the choice of operation
1.insert
2.delete
3.display
*/
