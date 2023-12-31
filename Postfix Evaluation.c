//Program to convert postflix in stack elements
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#define size 40
int pop();
void push(int);

char postfix[size];
int stack[size],top=-1;
int main()
{
	int a,b,i,result,peval;
	char ch;
	printf("Enter a postflix expression \n");
	scanf("%s",postfix);
	for(i=0;postfix[i] != '\0';i++)
	{
		ch = postfix[i];
		if(isdigit(ch))
		{
			push(ch-'0');
		}
		else if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
		{
			b=pop();
			a=pop();
			switch(ch)
			{
				case'+':
					result=a+b;
					break;
				case'-':
					result=a-b;
					break;
				case'*':
					result=a*b;
					break;
				case'/':
					result=a/b;
					break;
			}
			push(result);
		}
	}
	peval=pop();
	printf("The Postfix Evaluation = %d\n",peval);
	return 0;
}
void push(int n)
{
	if(top<size-1)
	{
		stack[++top]=n;
	}
	else
	{
		printf("Stack is full!!\n");
	}
}
int pop()
{
	int n;
	if(top>-1)
	{
		n=stack[top];
		top--;
		return n;
	}
	else
	{
		printf("Stack is empty\n");
		exit(-1);
	}
}

