

// Rat In A Maze Problem Solution(Backtracking)
#include <bits/stdc++.h>
using namespace std;
#define N 18
int sol[N][N];

void printAllPossibleSolution(int maze[][N], int n, int row, int col)
{
    if (row == n - 1 && col == n - 1)
    {
        //A possible Path found
        //Print path and return
        sol[row][col] = 1;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << sol[i][j] << " ";
            }
        }
        cout << endl;
        sol[row][col] = 0;  //Even if we remove this our solution will work correct
        return;
    }

    //Check if valid position
    if (row < 0 || col < 0 || row == n || col == n || maze[row][col] == 0 || sol[row][col] == 1)
    {
        return;
    }

    //Making position as 1 in sol
    sol[row][col] = 1;

    //Moving D, U, R, L
    printAllPossibleSolution(maze, n, row, col + 1);
    printAllPossibleSolution(maze, n, row, col - 1);
    printAllPossibleSolution(maze, n, row + 1, col);
    printAllPossibleSolution(maze, n, row - 1, col);

    //Backtrack
    sol[row][col] = 0;
}

void rateInAMaze(int maze[][N], int n)
{
    memset(sol, 0, N * N * sizeof(int));
    printAllPossibleSolution(maze, n, 0, 0);
}

int main()
{
    int n;
    cin >> n;
    int maze[N][N];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }
    rateInAMaze(maze, n);
    return 0;
}


//Sample Input 2 :
//3
//1 0 1
//1 1 1
//1 1 1
//Sample Output 2 :
//1 0 0 1 1 1 1 1 1 
//1 0 0 1 0 0 1 1 1 
//1 0 0 1 1 0 0 1 1 
//1 0 0 1 1 1 0 0 1 
//
//
//
//
//Sample Input 1 :
//3
//1 0 1
//1 0 1
//1 1 1
//Sample Output 1 :
//1 0 0 1 0 0 1 1 1 
//Explanation :
//Only 1 path is possible.
