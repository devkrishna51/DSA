#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution
{

    bool isSafe(vector<vector<char>> &board, int row, int col, int val)
    {
        for (int i = 0; i < 9; i++)
        {
            if (board[i][col] == val)
            {
                return false;
            }
        }
        for (int j = 0; j < 9; j++)
        {
            if (board[row][j] == val)
            {
                return false;
            }
        }
        int r = (row / 3) * 3;
        int c = (col / 3) * 3;
        for (int i = r; i <= r + 2; i++)
        {
            for (int j = c; j <= c + 2; j++)
            {
                if (board[i][j] == val)
                {
                    return false;
                }
            }
        }
        return true;
    }
    bool helper(vector<vector<char>> &board, int row, int col)
    {
        if (row == 9)
        {
            return true;
        }
        int nextRow = row, nextCol = col + 1;
        if (nextCol == 9)
        {
            nextRow = row + 1;
            nextCol = 0;
        }
        if (board[row][col] != '.')
            return helper(board, nextRow, nextCol);

        for (char i = '1'; i <= '9'; i++)
        {
            if (isSafe(board, row, col, i))
            {
                board[row][col] = i;
                if(helper(board, nextRow, nextCol))
                {
                    return true ; 
                }
                board[row][col] = '.';
            }
        }
        return false ; 
    }

public:
    void Solve(vector<vector<char>> &board)
    {
        vector<vector<char>> result;
        helper(board, 0, 0);
    }
};
int main()
{

    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};

    Solution s1;
    s1.Solve(board);
    for (auto x : board)
    {
        for (auto x2 : x)
        {
            cout << x2 << " ";
        }
        cout << endl;
    }
    return 0;
}