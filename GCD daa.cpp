#include<stdio.h>
int GCD(int a,int b)
{
	while(b!=0)
	{
		int temp = b;
		b=a%b;
		a=temp;
	}
	return a;
}
int main()
{
	int x,y;
	printf("enter the x and y:\n");
	scanf("%d %d",&x,&y);
	printf("the gcd of x and y is :%d\n",GCD(x,y));
}