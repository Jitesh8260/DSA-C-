//program to perform operations in a linked list
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *next;
};
struct node *start=NULL;
struct node *newstart=NULL;
void createlist(struct node *);
void display(struct node*);
int count(struct node*);
int main()
{
	int f;
	start=(struct node*)malloc(sizeof(struct node));
	if(start==NULL)
	{
		printf("out of memory\n");
		exit(0);
	}
	createlist(start);
	display(start);
	return 0;
	
}
void createlist(struct node *link)
{
	int i=1;
	char ch;
	printf("\nEnter element for node %d: ",i);
	scanf("%d",&link->info);
	link->next=NULL;
	printf("\n Press n to quit and any other key to continue: ");
	scanf("%c",&ch);
	i++;
	while(ch!='n')
	{
		link->next=(struct node*)malloc(sizeof(struct node));
		if(link->next==NULL)
		{
			printf("\n out of memory");
			exit(0);
		}
		link=link->next;
		printf("\n Enter element for node %d: ",i);
		scanf("%d",&link->info);
		link->next=NULL;
		i++;
		printf("\n Press 'n' to quit and any other key to continue: ");
		scanf("%c",&ch);
	}
}
void display(struct node *link)
{
	printf("\n Elements are: ");
	while(link->next!=NULL)
	{
		printf("%d\t",link->info);
		link=link->next;
	}
}
