//program to show transpose of a matrix
#include<stdio.h>
void input(int[][50],int ,int );
void display(int[][50], int ,int );
void transpose(int[][50],int[][50],int ,int );
int main()
{
	int a[50][50],t[50][50],r,c;
	printf("Enter the no of rows and columns:\n");
	scanf("%d%d",&r,&c);
	input(a,r,c);
	display(a,r,c);
	printf("After transpose matrix is:\n");
	transpose(a,t,r,c);
	display(t,c,r);
	return 0;
}
void input(int a[][50],int r,int c)
{
	int i,j;
	printf("Enter the elements of the matrix:\n");
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
	printf("The matrix is:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)		
			printf("%d\t",a[i][j]);
		printf("\n");
		
	}
}
void transpose(int a[][50], int t[][50],int c, int r)
{
	int i,j;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[i][j]=a[j][i];
		}
	}
}
