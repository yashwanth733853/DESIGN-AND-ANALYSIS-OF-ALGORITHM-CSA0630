#include<stdio.h>
#include<stdlib.h>
#define MAX_CONTAINERS 100
#define MAX_ITEMS 100
void firstFitDecreasing(int items[], int n, int binCapacity)
{
	int bins[MAX_CONTAINERS]={0};
	int binCount=0;
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(items[i]<items[j])
			{
				int temp = items[i];
				items[i] = items[j];
				items[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<binCount;j++)
		{
			if(bins[j]>=items[i])
			{
				bins[j]-= items[i];
				break;
			}
		}
		if(j == binCount)
		{
			bins[binCount]=binCapacity - items[i];
			binCount++;
		}
	}
	printf("Numbers of containers used: %d\n", binCount);
}
int main()
{
	int items[MAX_ITEMS];
	int n,binCapacity;
	printf("enter the number of items: ");
	scanf("%d",&n);
	printf("enter the sizes of items: ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&items[i]);
	}
	printf("Enter the capacity of each container: ");
	scanf("%d", &binCapacity);
	firstFitDecreasing(items, n, binCapacity);
}