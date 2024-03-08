#include<stdio.h>
#include<limits.h>
#define V 4
# define INFINITY INT_MAX
int graph[V][V]={{0,10,15,20},{10,0,35,25},{15,35,0,30},{20,25,30,0}};
int memo[V][1<<V];
int min(int a,int b)
{
	return (a<b) ? a:b;
}
int tsp(int current,int mask)
{
	if(mask ==(1<<V)-1)
	{
		return graph[current][0];
	}
	if(memo[current][mask]!=-1)
	{
		return memo[current][mask];
	}
	int min_cost = INFINITY;
	for(int next = 0; next < V;next++)
	{
		if(!(mask &(1<<next)))
		{
			int new_mask = mask |(1<<next);
			int cost = graph[current][next]+tsp(next, new_mask);
			min_cost = min(min_cost, cost);
		}
	}
	return memo[current][mask] = min_cost;
}
int main()
{
	for(int i = 0;i<V;i++)
	{
		for(int j=0;j<(1<<V);j++)
		{
			memo[i][j] = -1;
		}
	}
	int starting_vertex = 0;
	int starting_mask = 1<< starting_vertex;
	int min_cost = tsp(starting_vertex, starting_mask);
	printf("Minimum cost of the travelling salesman problem: %d\n",min_cost);
}