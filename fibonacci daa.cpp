#include<stdio.h>
#include<string.h>
int fib(int n)
{
     if(n<=1)
     {
     	return n;
	 }
	 else
	 {
	 	return fib(n-1) + fib(n-2);
	 }
}
int main()
{
	int n,i;
	printf("enter the number of terms:\n");
	scanf("%d",&n);
	printf("Fibonacci series: ");
	for(i=0;i<=n;i++)
	{
		printf("%d ",fib(i));
	}
	return 0;
}