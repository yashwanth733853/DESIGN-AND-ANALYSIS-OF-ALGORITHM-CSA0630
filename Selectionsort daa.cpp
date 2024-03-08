#include<stdio.h>
void selectionsort(int arr[],int n)
{
	int i,j,min_idx;
	for(i=0;i<n-1;i++)
	{
		min_idx = i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min_idx])
			{
				min_idx=j;
			}
		}
		int temp = arr[min_idx];
		arr[min_idx]=arr[i];
		arr[i]=temp;
	}
}
int main()
{
	int arr[10],n,i;
	printf("enter the number of elements of array is:\n");
	scanf("%d",&n);
	printf("enter the elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("\n");
	selectionsort(arr,n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
