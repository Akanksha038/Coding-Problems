//BACKTRACKING


#include <bits/stdc++.h>
using namespace std;
int board[10][10];

bool isPossible(int n, int row, int col)
{
    //We only need to check vertically up, diagonally left and diagonally right
    //Verticaly up
    for (int i = row - 1; i >= 0; i--)
    {
        if (board[i][col] == 1)
        {
            return false;
        }
    }

    //Diagonally left
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    //Diagonally right
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
    {
        if (board[i][j] == 1)
        {
            return false;
        }
    }

    return true;
}

void printAllPossibleCombination(int n, int row)
{
    if (row == n)
    {
        //Found a possible combination
        //Print the combination
        //Return
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
        return;
    }
    //Checking for possible correct position to place queen in reach row
    for (int i = 0; i < n; i++)
    {
        if (isPossible(n, row, i))
        {
            board[row][i] = 1;
            printAllPossibleCombination(n, row + 1);
            board[row][i] = 0;
        }
    }
}

void nQueens(int n)
{
    //Puting 0 at each element of board matrix
    memset(board, 0, 10 * 10 * sizeof(int));
    //Printing all possible solutions
    printAllPossibleCombination(n, 0);
}
int main()
{
    int n;
    cin >> n;
    nQueens(n);
    return 0;
}
























