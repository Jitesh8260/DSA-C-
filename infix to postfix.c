//program for infix to postfix operation
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
void inf_to_post();
int precedence(char);
void push(char);
char pop();
int isempty();
int isfull();
char stack[max];
char infix[max];
char poxt[max];
int top=-1;
int main()
{
				printf("Enter the infix expression:\n");
				scanf("%s",infix);
				printf("the postfix expression is: \n");
				inf_to_post();
}
void inf_to_post()
{
				int i,p,q;
				char symbol,next;
				int j=0;
				for(i=0;i<strlen(infix);i++)
				{
								symbol=infix[i];
								switch(symbol)
								{
												case'(':
																push(symbol);
																break;
												case')':
																while((next=pop())!='(')
																				poxt[j++]=next;
																        break;
												case'+':
												case'-':
												case'*':
												case'^':
																				while(!isempty()&& precedence(stack[top])>=precedence(symbol))
																								poxt[j++]=pop();
																				push(symbol);
																				break;
												default:
												poxt[j++]=symbol;
								}
				}
while(!isempty())
				poxt[j++]=pop();
poxt[j]='\0';

printf("%s",poxt);
}
int precedence(char symbol)
{
				switch(symbol)
				{
								case'^':
												return 3;
								case'*':
								case'/':
												return 2;
								case'+':
								case'-':
												return 1;
								default:
												return 0;
				}
}

char pop()
{
				char ch;
				if(isempty())
								return -1;

				ch=stack[top];
				top--;
				return (ch);
}

int isempty()
{
				return top==-1;
}
int isfull()
{
				return top== max-1;
}
void push(char symbol)
{
				if(top== max-1)
				{
								printf("stack overflow!!\n");
								return ;
				}
				top++;
				stack[top]=symbol;
}

  				








