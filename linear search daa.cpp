#include<stdio.h>
int main()
{
	int a[10],i,n,target,flag=0,index;
	printf("enter the number of elements of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the target element:\n");
	scanf("%d",&target);
	for(i=0;i<n;i++)
	{
		if(a[i]==target)
		{
			flag =1;
			index=i;
		}
	}
	if(flag==1)
	{
		printf("the element is found at index %d in list\n",index);
	}
	else
	{
		printf("the element is not found in the list");
	}
}