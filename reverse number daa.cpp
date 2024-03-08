#include<stdio.h>
int reverse(int num)
{
	int rem=0;
	while(num!=0)
	{
		rem=(rem*10)+(num%10);
		num=num/10;
	}
	return rem;
}
int main()
{
	int n;
	printf("enter the number:\n");
	scanf("%d",&n);
	int rev=reverse(n);
	printf("the reversed number is:%d\n",rev);
}