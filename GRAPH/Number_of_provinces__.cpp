#include <bits/stdc++.h>
using namespace std;

class Solution
{
     void DFS(vector<vector<int>> &adj, vector<bool> &visited, int idx)
     {

          visited[idx] = true;

          for (int j = 0; j < adj[0].size(); j++)
          {
               if (adj[idx][j] == 1 && !visited[j])
               {
                    visited[j] = true;
                    DFS(adj, visited, j);
               }
          }
     }

public:
     int findCircleNum(vector<vector<int>> &adj)
     {
          int row = adj.size();
          int col = adj[0].size();
          vector<bool> visited(row, false);
          int city = 0;

          for (int i = 0; i < row; i++)
          {
               if (!visited[i])
               {
                    city++;
                    DFS(adj, visited, i);
               }
          }
          return city;
     }
};
int main()
{
     vector<vector<int>> isConnected = {
         {1, 1, 0},
         {1, 1, 0},
         {0, 0, 1}
     };
     
     Solution s1 ; 
     int result = s1.findCircleNum(isConnected) ; 

     cout << "There are " << result << " Cities" <<endl ; 

     return 0;
}