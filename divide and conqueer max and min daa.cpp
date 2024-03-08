#include<stdio.h>
#include<string.h>
int main()
{
	int a[10];
	int i,j,n;
	printf("enter the number of elements of array:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
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
	printf("the largest element of array is:%d\n",a[n-1]);
	printf("the smallest element of array is:%d\n",a[0]);
}