#include <stdio.h>
#include <limits.h>

#define N 4 


void printSolution(int assignment[], int cost);
int minCost(int costMatrix[N][N], int rowMask, int colMask, int r, int cost);


void printSolution(int assignment[], int cost) {
    printf("Assigned Tasks to Workers:\n");
    for (int i = 0; i < N; i++)
        printf("Worker %d -> Task %d\n", i + 1, assignment[i] + 1);
    printf("Total Cost: %d\n", cost);
}


int minCost(int costMatrix[N][N], int rowMask, int colMask, int r, int cost) {

    if (r >= N)
        return cost;

    int min = INT_MAX;
    for (int c = 0; c < N; c++) {
        if (!(colMask & (1 << c))) {
            int newCost = cost + costMatrix[r][c];
            int newMask = rowMask | (1 << r);
            newMask |= (1 << c);

            if (newCost < min)
                min = minCost(costMatrix, newMask, colMask | (1 << c), r + 1, newCost);
        }
    }
    return min;
}


void solveAssignmentProblem(int costMatrix[N][N]) {
    int assignment[N]; 
    int rowMask = 0, colMask = 0; 
  
    int initialCost = INT_MAX;
    for (int i = 0; i < N; i++) {
        int currentCost = minCost(costMatrix, 1 << i, 0, 0, costMatrix[0][i]);
        if (currentCost < initialCost)
            initialCost = currentCost;
    }

    printf("Initial Total Cost: %d\n", initialCost);
}

int main() {
    int costMatrix[N][N] = {{9, 2, 7, 8},
                             {6, 4, 3, 7},
                             {5, 8, 1, 8},
                             {7, 6, 9, 4}};

    solveAssignmentProblem(costMatrix);

    return 0;
}
