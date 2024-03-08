#include<stdio.h>
int fact(int n)
{
	if(n==0||n==1)
	{
		return 1; 
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int num;
	printf("enter the number:\n");
	scanf("%d",&num);
	printf("the factorial of %d is:%d\n",num,fact(num));
}