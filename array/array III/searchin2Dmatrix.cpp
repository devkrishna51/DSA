#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
     bool searchinmatrix(vector<vector<int>> matrix, int target)
     {
          int m = matrix.size();
          int n = matrix[0].size();

          int i = 0;
          int j = n - 1;
          while (i < m && j >= 0)
          {
               if (matrix[i][j] == target)
               {
                    return true;
               }
               else if (matrix[i][j] > target)
               {
                    j--;
               }
               else
               {
                    i++;
               }
          }
          return false;
     }
};
int main()
{
     vector<vector<int>> vec = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
     int search;
     cout << "\n\nEnter a no to search in matrix :  ";
     cin >> search;
     Solution s1;
     bool result = s1.searchinmatrix(vec, search);
     if(result == true)
     {
          cout <<"\nnumber found in matrix" ; 
     }
     else{
          cout << "\nNumber was not found in matrix" ; 
     }
     return 0;
}
