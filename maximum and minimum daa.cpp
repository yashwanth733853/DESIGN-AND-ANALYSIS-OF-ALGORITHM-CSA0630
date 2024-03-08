#include<stdio.h>
int main()
{
	int a[10],i,j,n;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the entered elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("the maximum and minimum elements of the given list are: %d,%d\n",a[n-1],a[0]);
}