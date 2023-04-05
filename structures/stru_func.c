#include<stdio.h>
	struct book
	{
	char name[50];
	char author[50];
	char publisher[50];
	float price;
	};
void display(struct book);
int main()
{
	struct book x={"let us c","kanithkar","bpb",275};
	display(x);
return 0;
}
void display(struct book a)
{
	printf("book name : %s",a.name);
	printf("\nauthor: %s",a.author);
	printf("\npublisher:%s",a.publisher);
	printf("\nprice:%f",a.price);
}
	