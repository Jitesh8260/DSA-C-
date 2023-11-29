//reverse a string using stack
#include<stdio.h>
#include<string.h>
#define MAX 100
int top=-1;
int item;
char stackstring[MAX];
int push(char item);
char pop();
int isempty();
int isfull();
int main()
{
	char str[MAX];
	int i;
	printf("input a string:\n");
	scanf("%s",str);
	for(i=0;i<strlen(str);i++)
		push(str[i]);
	i = 0;
	while(top != -1)
	{
		str[i]=pop();
		i++;
	}
	str[i] = '\0';
	 printf("reversed string is:%s\n",str);
	 return 0;
}
int push(char item)
{
	if(isfull())
	{
		printf("stack is full!!\n");
		return 0;
	}
	top=top+1;
	stackstring[top]=item;
}
char pop()
{
	if(isempty())
	{
		printf("stack is empty!!\n");
		return 0;
	}
	item=stackstring[top];
	top=top-1;
	return item;
}
int isempty()
{
	return top==-1;
}
int isfull()
{
	return top==MAX-1;
}

