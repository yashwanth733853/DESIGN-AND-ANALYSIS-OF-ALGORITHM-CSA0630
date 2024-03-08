#include<stdio.h>
int main()
{
	int a[10][10],b[10][10],c[10][10];
	int m,n,o,p;
	printf("enter the no.of rows of matrix 1:\n");
	scanf("%d",&m);
	printf("enter the no .of columns of matrix 1:\n");
	scanf("%d",&n);
	printf("enter the no.of rows of matrix 2:\n");
	scanf("%d",&o);
	printf("enter the no.of columns of matrix 2:\n");
	scanf("%d",&p);
	int i,j,k;
	printf("enter the elements of matrix 1:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of matrix 2:\n");
	for(j=0;j<o;j++)
	{
		for(k=0;k<p;k++)
		{
			scanf("%d",&b[j][k]);
		}
	}
	if(n != o)
	{
		printf("matrix multiplication is not posiible:\n");
	}
	else
	{
		printf("the resultant matrix is:\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<p;j++)
			{
				c[i][j]=0;
				for(k=0;k<n;k++)
				{
					c[i][j] += (a[i][k]*b[k][j]);
				}
				printf("%d ",c[i][j]);
			}
			printf("\n");
		}
	}

}