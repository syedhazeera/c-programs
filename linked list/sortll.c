#include<stdio.h>
#include<stdlib.h>
 
struct node
{
	int data;
	struct node* next;
};

void insert_beginning(struct node** head, int newdata)
{
	struct node* newnode = (struct node*) malloc(sizeof(struct node));
	 //means no data
	newnode->data = newdata;
	newnode->next = *head;
	*head = newnode;
}

void traverse(struct node* head)
{
	while(head != NULL)
	{
		printf("%d\n",head->data);
		head = head->next;
	}
}
void sort(struct node *head)
{
    struct node* p = NULL;
    struct node* q = NULL;
    int temp =0;

	
    for(p=head;p->next != NULL;p = p->next)
    {
        for(q=p;q!=NULL;q=q->next)
        {
            if(p->data > q->data)
            {
                temp = p->data;
                p->data = q->data;
                q->data = temp;
            }
        }
    }
            
        
    
}

int main()
{
	struct node* head = NULL;
	
	insert_beginning(&head, 5);
	insert_beginning(&head, 10);
	insert_beginning(&head, 29);
	insert_beginning(&head, 1);
	
	printf("Node data before sorting\n");
	traverse(head);
	sort(head);
	printf("Node data after sorting\n");
	traverse(head);
return 0;
}
/*output:
/tmp/yPgSBZfQqA.o
Node data before sorting
1
29
10
5
Node data after sorting
1
5
10
29

*/