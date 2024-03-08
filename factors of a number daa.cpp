#include<stdio.h>
int factors(int n)
{
	int i,j=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
int main()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	factors(num);
}