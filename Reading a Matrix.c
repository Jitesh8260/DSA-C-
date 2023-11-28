//program to read a matrix
#include<stdio.h>
void input(int a[][50],int ,int );
void display(int a[][50], int ,int );
int main()
{
	int a[50][50],r,c;
	printf("enter the no of rows and columns:\n");
	scanf("%d%d",&r,&c);
	input(a,r,c);
	display(a,r,c);
	return 0;
}
void input(int a[][50],int r,int c)
{
	int i,j;
	printf("enter the elements of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void display(int a[][50],int r,int c)
{
	int i,j;
	printf("the matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)		
			printf("%d\t",a[i][j]);
		printf("\n");
		
	}
}
