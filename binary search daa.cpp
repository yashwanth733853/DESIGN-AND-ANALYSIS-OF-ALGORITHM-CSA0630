#include<stdio.h>
int binarySearch(int arr[],int left,int right,int target)
{
	
	if(right >= left)
	{
		int mid = left + (right - left)/2;
	    if(arr[mid] == target)
    	{
    		return mid;
    	}
	    if(arr[mid]>target)
	    {
	        return binarySearch(arr,left,mid-1,target);
    	}
	    return binarySearch(arr,mid+1,right,target);
    }
    return -1;
}
int main()
{
	int arr[10];
	int n,target,i;
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter the elements:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter the target:\n");
	scanf("%d",&target);
	int result = binarySearch(arr,0,n-1,target);
	if(result == -1)
	{
		printf("Element is not present in the array\n");
	}
	else
	{
		printf("element is present at index %d\n",result);
	}
	return 0;
}