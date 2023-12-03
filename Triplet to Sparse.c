//program to form sparse matrix from triplet form
#include<stdio.h>
void readMatrix(int[][3],int );
void createSparse(int [][3], int ,int ,int[][50] );
void displaySparse(int[][50]);
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
	createSparse(sparse,r,c,triplet);
	displaySparse(triplet);
	return 0;
}
void readMatrix(int triplet[][3],int r)
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
void createSparse(int triplet[][3],int r,int nz,int sparse[][50] )
{
	int i,j;
	for(i=0;i<nz;i++)
	{
		sparse[triplet[i][0]][triplet[i][1]]=triplet[i][2];
	}
}
			
void displaySparse(int sparse[][50])
{
	int i,j;
	printf("\nThe sparse matrix is: \n");
	for(i=0;i<=nz;i++)
	{
		for(j=0;j<3;j++)
			printf("%d\t",sparse[i][j]);
		printf("\n");
	}
}
