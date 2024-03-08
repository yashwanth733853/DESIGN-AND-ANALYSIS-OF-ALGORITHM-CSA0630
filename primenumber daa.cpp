#include<stdio.h>
int isprime(int n)
{
	int i, count=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			count++;
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
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	if(isprime(num))
	{
		printf("%d is a prime number\n",num);
	}
	else
	{
		printf("%d is not a prime number\n",num);
	}
}