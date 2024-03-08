#include<stdio.h>
int main()
{
	int a[10],n,i;
	printf("enter the number of elements of array:\n");
	scanf("%d",&n);
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int pos,key;
	printf("enter the pos of element:\n");
	scanf("%d",&pos);
	printf("enter the key element:\n");
	scanf("%d",&key);
	for(i=pos;i<n;i++)
	{
		a[i+1]=a[i];
		a[pos]=key;
	}
	printf("the updated list is:\n");
	for(i=0;i<n+1;i++)
	{
		printf("%d ",a[i]);
	}
}