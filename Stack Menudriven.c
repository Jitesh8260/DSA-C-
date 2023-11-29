//implementation of stack and perform repeated operations on the stack
#include<stdio.h>
#define max 10
int STACK[max];
int TOP = -1;
int item;
void push();
void pop();
void display();
int main()
{
	int i=1,x,y;
	while(i)
	{
		printf("\n enter 1: push \nenter 2:pop \nenter 3: display \nenter 4:exit");
		scanf("%d",&x);
		switch(x)
		{
			case 1:
				push();
				break;
			case 2:
				pop();
				break;
			case 3:
				display();
				break;
			case 4:
				i=0;
				break;
		}
	}
	return 0; 	
}
void push()
{
	if(TOP==max-1)
	{
		printf("\n STACK OVERFLOW");
		return;
	}
	TOP++;
	printf("Enter the data to push \n");
	scanf("%d",&item);
	STACK[TOP]=item;
}
void pop()
{
	int item;
	if(TOP==-1)
	{
		printf("\n STACK UNDERFLOW");
		return;
	}
	printf("the deleted item=%d\n",STACK[TOP]);
	TOP--;
}
void display()
{
	int i;
	for(i=0;i<=TOP;i++)
		printf("%d\n",STACK[i]);
}

