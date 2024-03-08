#include<stdio.h>
#include<string.h>
int isprime(int n)
{
	int i,count=0;
	for (i=1;i<=n;i++)
	{
		
		if(n%i==0)
		{
			count ++;
		}
	}
	if(count>2)
	{
		return 0;
	}
	else
	{
		return 1;
	}
	return 0;
}
int main()
{
	int start,end,i,j;
	printf("enter the starting and ending number:\n");
	scanf("%d %d",&start,&end);
    while(start<end)
    {
    	if(isprime(start))
    	{
    		printf("%d ",start);
		}
		start++;
	}
}