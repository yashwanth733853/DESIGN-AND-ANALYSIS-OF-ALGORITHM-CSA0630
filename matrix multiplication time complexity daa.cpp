#include<stdio.h>
#include<time.h>
#define N 3
void multiply_matrices(int mat1[N][N],int mat2[N][N],int result[N][N])
{
	int i,j,k;
	for(i=0;i<N;i++)
	{
		for(j=0;j<N;j++)
		{
			result[i][j]=0;
			for(k=0;k<N;k++)
			{
				result[i][j]+=mat1[i][k]*mat2[k][j];
			}
		}
	}
}
int main()
{
	int mat1[N][N] ={{1,2,3},{4,5,6},{7,8,9}};
	int mat2[N][N] = {{9,8,7},{6,5,4},{3,2,1}};
	int result[N][N];
	clock_t start_time,end_time;
	double cpu_time_used;
	start_time = clock();
	multiply_matrices(mat1,mat2,result);
	end_time = clock();
	cpu_time_used = ((double)(end_time-start_time))/CLOCKS_PER_SEC;
	printf("Execution time: %f\n",cpu_time_used);
}