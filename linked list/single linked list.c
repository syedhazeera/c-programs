#include <stdio.h>
#include <malloc.h>
#include<stdlib.h>
struct node
{
  int info;
  struct node *link;  
}*start;
void create_list(int data);
void addatbeg(int data);
void addafter(int data,int pos);
void del(int data);
void search(int data);
void display();
void del(int data);
int main() 
{
 int choice,n,m,position,i,tmp;
 while(1)
 {
    printf (" 1.Create List \n") ;
    printf("2.Add at begining\n");
    printf ("3.Add after \n");
    printf("4.Delete\n");
    printf("5.Display\n");
    printf("6.Search\n") ;
    printf("7.Quit\n") ;
    printf ("Enter your choice ") ;
    scanf("%d",&choice);
    switch(choice)
    {

        case 1:
            start=NULL;
            printf ("How many nodes you want ") ;
            scanf ( "%d" , &n) ;
            for(i=0;i<n;i++)
            {
                printf("Enter the element :");
                scanf("%d",&m);
                create_list(m);
            }
            break;
        case 2:
            printf ("Enter the element : ");
            scanf ("%d" ,&m);
            addatbeg(m); 
            break;
        case 3:
	    printf ("Enter the element:  ");
            scanf ("%d" ,&m);
            printf ("Enter the position after which this element is to be inserted ");
            scanf("%d",&position);
            addafter(m,position);
            break;            
        case 4:
            if(start==NULL)
            {
            printf ("List is empty\n");
            continue;
            }
            printf ("Enter the element for deletion:");
            scanf ("%d" ,&m);
            del(m);
            break;
        case 5:
            display();
            break;
        case 6:
            printf("Enter the element to be searched :");
            scanf("%d", &m);
            search(m);
            break;
        case 7:
            exit(0);
            default:
            printf ("Wrong choice\n");
            
            }/*End of switch*/
 }/*End of while*/ 
    
}/*End of main() */
void create_list(int data)
{
struct node *q, *tmp;
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->link=NULL;
if (start==NULL) // * If list is empty* /
start=tmp;
else
    {
/*Element inserted at the end*/
    q=start;
    while(q->link!=NULL)
    q=q->link;
    q->link=tmp;
    }
}
void addatbeg(int data)
{
struct node *tmp;
tmp=malloc(sizeof(struct node));
tmp->info=data;
tmp->link=start;
start  = tmp;
}

void del(int data)
{
    struct node *tmp, *q;
    if(start->info==data)
    {
        tmp=start,
        start=start->link;//*First element deleted*1
        free (tmp);
        return;
    }
    q=start;
    while(q->link->link!=NULL)
    {
        if(q->link->info==data)//*Element deleted in between*1
            {
                tmp=q->link;
                q->link=tmp->link;
                free(tmp);
                return;
            }
q=q->link;
}
if (q->link->info==data) //*Last element deleted* /
{
    tmp=q->link;
    free(tmp) ;
    q->link=NULL;
    return;
}
printf ("Element %d not found\n", data) ;
}/*End of del( )*/
void display()
{
    struct node *q;
    if(start==NULL)
    {
        printf ("List is empty\n");
        return;
    }
        q=start;
        printf("List is : \n");
        while(q!=NULL)
        {
            printf("%d ", q->info);
            q=q->link;
        }
        printf (" \n") ;
} //*End of display ( * /
void addafter(int data,int pos)
{
struct node *tmp, *q;
int i;
q=start;
for(i=0;i<pos-1;i++)
	{
		q=q->link;
		if(q==NULL)
		{
			printf("There are less than %d elements", pos);
			return;
		}
	} 
	tmp = malloc(sizeof(struct node));
	tmp->link=q->link;
	tmp->info=data;
	q->link=tmp;
}
    
void search(int data)
{
    struct node *ptr=start;
    int pos=1;
    while(ptr!=NULL)
        {
            if (ptr->info==data)
            {
                printf("Item %d found at position %d\n",data,pos);
                return;
            }
        ptr=ptr->link;
        pos++;
        }
    if (ptr==NULL)
        printf("Item %d not found in list\n", data);
}
/*output:
$ ./'single linked list'
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice

LENOVO@DESKTOP-KCFUUP4 ~/linked list
$ gcc 'single linked list.c' -o 'single linked list'

LENOVO@DESKTOP-KCFUUP4 ~/linked list
$ ./'single linked list'
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 1
How many nodes you want 3
Enter the element :4
Enter the element :5
Enter the element :7
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 5
List is :
4 5 7
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 2
Enter the element : 3
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 5
List is :
3 4 5 7
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 3
Enter the element:  5
Enter the position after which this element is to be inserted 2
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 5
List is :
3 4 5 5 7
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 6
Enter the element to be searched :5
Item 5 found at position 3
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 4
Enter the element for deletion:5
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice 5
List is :
3 4 5 7
 1.Create List
2.Add at begining
3.Add after
4.Delete
5.Display
6.Search
7.Quit
Enter your choice
*/
