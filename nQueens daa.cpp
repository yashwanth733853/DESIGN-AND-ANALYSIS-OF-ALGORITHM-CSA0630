#include<stdio.h>
#include<stdbool.h>
#define N 8
bool isSafe(int board[N][N], int row, int col);
bool solveNQueens(int board[N][N], int col);
void printSolution(int board[N][N]);
bool isSafe(int board[N][N], int row, int col)
{
	int i,j;
	for(i=0;i<col;i++)
	{
		if(board[row][i])
		{
			return false;
		}
	}
	for(i=row, j=col;i>=0 && j>=0;i--,j--)
	{
		if(board[i][j])
		{
			return false;
		}
	}
	for(i=row, j=col; j>=0 && i<N;i++,j--)
	{
		if(board[i][j])
		{
			return false;
		}
	}
	return true;
}
bool solveNQueens(int board[N][N], int col)
{
	if(col>=N)
	{
		return true;
	}
	for(int i=0;i<N;i++)
	{
		if(isSafe(board, i, col))
		{
			board[i][col]=1;
			if(solveNQueens(board,col+1))
			{
				return true;
			}
			board[i][col]=0;
		}
	}
	return false;
}
void solveNQueensBacktracking()
{
	int board[N][N]={0};
	if(solveNQueens(board,0)== false)
	{
		printf("Solution does not exist");
		return;
	}
	printSolution(board);
}
void printSolution(int board[N][N])
{
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{
			printf("%d ",board[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	solveNQueensBacktracking();
	return 0;
}