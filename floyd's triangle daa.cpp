#include<stdio.h>
void print(int n)
{
	int i,j,k=1;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}
int main()
{
	int num;
	printf("enter the no.of rows:\n");
	scanf("%d",&num);
	print(num);
}