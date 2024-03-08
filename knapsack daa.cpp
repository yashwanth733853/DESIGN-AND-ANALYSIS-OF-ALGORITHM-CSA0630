#include<stdio.h>
#include<stdlib.h>
struct Item
{
	int value;
	int weight;
};

int compare(const void*a, const void *b)
{
	double ratio1 = (double)(((struct Item *)a)->value)/(((struct Item *)a)->weight);
	double ratio2 = (double)(((struct Item *)b)->value)/(((struct Item *)b)->weight);
	return (ratio2 > ratio1) ? 1 : -1;
}
void knapsackGreedy(struct Item arr[],int n,int capacity)
{
	qsort(arr, n, sizeof(struct Item), compare);
	int currentWeight = 0;
	double totalValue= 0.0;
	for(int i = 0; i < n; i++)
	{
		if(currentWeight +arr[i].weight <= capacity )
		{
			currentWeight += arr[i].weight;
			totalValue += arr[i].value;
		}
		else
		{
			int remainingWeight = capacity - currentWeight;
			totalValue += (arr[i].value/(double)arr[i].weight) * remainingWeight;
			break;
		}
	}
	printf("maximum value achievable: %2lf\n",totalValue);
}
int main()
{
	struct Item items[] ={ {60,10},{100,20},{120,30}};
	int n = sizeof(items)/sizeof(items[0]);
	int capacity = 50;
	knapsackGreedy(items, n ,capacity);
	return 0;
}