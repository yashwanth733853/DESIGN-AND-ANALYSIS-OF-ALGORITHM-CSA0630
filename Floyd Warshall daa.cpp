#include<stdio.h>

#define I 99999
#define V 4
void floydWarshall(int graph[V][V])
{
	int dist[V][V];
	int i,j,k;
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			dist[i][j] = graph[i][j];
		}
	}
	for(k=0;k<V;k++)
	{
		for(i=0;i<V;i++)
		{
			for(j=0;j<V;j++)
			{
				if(dist[i][k]+dist[k][j]<dist[i][j])
				{
					dist[i][j]=dist[i][k]+dist[k][j];
				}
			}
		}
	}
	printf("the following matrix shows the shortest distances between every pair of vertices:\n");
	for(i=0;i<V;i++)
	{
		for(j=0;j<V;j++)
		{
			if(dist[i][j] == I)
			{
				printf("%7s", "INF");
			}
			else{
				printf("%7d", dist[i][j]);
			}
		}
		printf("\n");
	}
}
int main()
{
	int graph[V][V] = {{0,5,I,10},{I,0,3,I},{I,I,0,1},{I,I,I,0}};
	floydWarshall(graph);
}