#include <iostream>
using namespace std;
class Solution
{
public:
    int uniquePaths(int row, int col)
    {
        int arr[row][col];
        for (int i = 0; i < row; i++)
        {
            arr[i][0] = 1;
        }
        for (int j = 0; j < col; j++)
        {
            arr[0][j] = 1;
        }
        for (int i = 1; i < row; i++)
        {
            for (int j = 1; j < col; j++)
            {
                arr[i][j] = arr[i - 1][j] + arr[i][j - 1];
            }
        }

        return arr[row-1][col-1] ; 
    }
};
int main()
{
    int m , n ; 
    cout << "Enter the Row : " ; 
    cin >> m ; 
    cout << "Enter the Columns :  " ; 
    cin >> n ;
    Solution s1 ; 

  int result = s1.uniquePaths(m,n); 
  cout << "the unique paths: " << result ;
    return 0;
}