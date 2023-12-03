//program to form sparse matrix from triplet form
#include<stdio.h>
void readmatrix(int[][3],int );
void createsparse(int [][3], int ,int ,int[][50] );
void displaysparse(int[][50]);
int main()
{
	int sparse[50][50],triplet[50][3],r,c,i,j,nz;
	printf("Enter the no of rows triplet matrix:\n");
	scanf("%d",&r);
	printf("Enter the number of non zero terms\n");
	scanf("%d",&nz);
	readmatrix(triplet,r);
	printf("\n The triplet matrix is \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",triplet[i][j]);

		}
		printf("\n");
	}
	createsparse(sparse,r,c,triplet);
	displaysparse(triplet);
	return 0;
}
void readmatrix(int triplet[][3],int r)
{
	int i,j;
	printf("Enter the elements of the matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&triplet[i][j]);
		}
	}
}
void createsparse(int triplet[][3],int r,int nz,int sparse[][50] )
{
	int i,j;
	for(i=0;i<nz;i++)
	{
		sparse[triplet[i][0]][triplet[i][1]]=triplet[i][2];
	}
}
			
void displaysparse(int sparse[][50])
{
	int i,j;
	printf("\nthe sparse matrix is: \n");
	for(i=0;i<=nz;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",sparse[i][j]);
		printf("\n");
	}
}
