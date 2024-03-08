#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter the no.of rows:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int num=1;
		for(j=0;j<n-i;j++)
		{
			printf(" ");
		}
		for(k=0;k<=i;k++)
		{
			printf(" ");
			printf("%3d",num);
			num=num*(i-k)/(k+1);
		}
		printf("\n");
	}
}