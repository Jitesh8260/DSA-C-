 //Program to implement queue
#include<stdio.h>
#include<stdlib.h>
#define n 20
int queue[n];
int front=-1,rear=-1;
void insert();
int delete();
int isFull();
int isEmpty();
void display();
int main()
{
	int choice;
	while(1)
	{
		printf("\n1.Insert \n2.Delete \n3.Display \n4.Exit \n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				insert();
				break;
			case 2:
				delete();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				printf("enter a valid choice");
		}
	}
}
void insert()
{
	int item;
	if(isfull())
	{
		printf("circular queue overflow!!\n");
		return;
	}
	else
	{
		printf("enter the value to insert:\n");
		scanf("%d",&item);
		if(rear==-1)
		{
			rear=0;
			front=0;
		}
		else
		{
			if(rear==n-1)
				rear=0;
			else
				rear++;
		}
		queue[rear]=item;		
	}
		
}
int delete()
{
	int item;
	if(isempty())
	{
		printf("\ncircular queue is empty!");
		return;
	}
	item=queue[front];
	if(front==rear)
	{
		front=-1;
		rear=-1;
	}
	else
	{
		if(front==n-1)
		front=0;
		else
			front++;
	}
	return item;
}
int isFull()
{
	return ((front==0&&rear==n-1)||(front==rear+1));
}
int isEmpty()
{
	return front==-1;
}
void display()
{
	int i;
	printf("\n Elements are: \n");
	for(i=front;i<=rear;i++)
		printf("%d\t",queue[i]);
}

	

