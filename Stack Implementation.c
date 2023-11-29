//implementation of stack
#include<stdio.h>
#define max 10
int STACK[max];
int TOP = -1;
int item;
void PUSH();
void POP();
void display();
void main()
{
	PUSH();
	PUSH();
	PUSH();
	printf("THE STACK IS:\n");
	display();
	printf("deletion of element undergoing\n");
	POP();
	printf("Remaining stack is:\n");
	display();
}
void PUSH()
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
void POP()
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

