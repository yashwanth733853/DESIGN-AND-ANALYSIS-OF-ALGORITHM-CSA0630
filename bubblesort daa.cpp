#include<stdio.h>
void bubblesort(int arr[],int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main()
{
	int arr[10],n,i;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the array elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the arrray elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
        printf("\n");
	}
	bubblesort(arr,n);
	printf("the sorted elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
}
