//Program for multiple parenthesis matching
#include<stdio.h>
#define max 100
char stack[max];
int top=-1;
void push(char[], char);
int pop();
int main()
{
	int i;
	char inf[max];
	printf("Enter the expression: \n");
	scanf("%s",inf);
	for(i=0;inf[i]!='\0';i++)
	{
		if(inf[i]=='(' || inf[i]=='[' || inf[i]=='{')
		{
			push(stack,inf[i]);
		}
		else if(inf[i]==')' || inf[i]==']' || inf[i]=='}')
		{
			if(inf[i]==')')
			{
				if(stack[top]=='(')
					pop();
				else
					printf("Not balanced\n");
				break;
			}
			else if(inf[i]==']')
			{
				if(stack[top]=='[')
					pop();
				else
					printf("Not balanced\n");
				break;
			}
			else if(inf[i]=='}')
			{
				if(stack[top]=='{')
					pop();
				else
					printf("Not balanced\n");
				break;
			}
		}
	}
	if(top==-1)
		printf("The expression is BALANCED\n");
	else
		printf("The expression is NOT BALANCED\n");
}
void push(char stack[max],char item)
{
	if(top==max-1)
	{
		printf("stack overflow\n");
	}
	else
		top++;
	stack[top]=item;
}
int pop()
{
	char item;
	if(top==-1)
	{
		printf("\nstack underflow");
		return;
	}
	item=stack[top];
	top--;
	return item;
}

				
			
			


