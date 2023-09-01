# DSA-C-
Creating Triplet matrix from sparse matrix
//program to create triplet matrix from a sparse matrix
#include<stdio.h>
void readmatrix(int[][50],int ,int);
void createsparse(int[][50],int ,int ,int[][3] );
void displaysparse(int[][3]);
int main()
{
	int sparse[50][50],triplet[50][3],r,c,i,j;
	printf("\nenter the dimension of the sparse matrix:\n");
	scanf("%d%d",&r,&c);
	readmatrix(sparse,r,c);
	printf("\n the sparse matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",sparse[i][j]);

		}
		printf("\n");
	}
	createsparse(sparse,r,c,triplet);
	displaysparse(triplet);
	return 0;
}
void readmatrix(int sparse[][50],int r,int c)
{
	int i,j;
	printf("enter the elements of sparse matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&sparse[i][j]);
		}
	}
}
void createsparse(int sparse[][50],int r,int c,int triplet[][3])
{
	int i,j,k=1,m=0;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(sparse[i][j]!=0)
			{
				triplet[k][0]=i;
				triplet[k][1]=j;
				triplet[k][2]=sparse[i][j];
				k++;
				m++;
			}
			triplet[0][0]=r;
			triplet[0][1]=c;
			triplet[0][2]=m;
		}
	}
}
void displaysparse(int triplet[][3])
{
	int i,j;
	printf("\nthe triplet matrix is: \n");
	for(i=0;i<=triplet[0][2];i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",triplet[i][j]);
		printf("\n");
	}
}

