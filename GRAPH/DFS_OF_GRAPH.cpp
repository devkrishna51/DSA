#include <bits/stdc++.h>
using namespace std;
class Solution
{
     void solve(vector<vector<int>> &adj, int u, vector<int> &result, vector<int> &visited)
     {

          if (visited[u] == true)
          {
               return;
          }

          visited[u] = true;
          result.push_back(u);

          for (auto v : adj[u])
          {
               if (!visited[v])
               {
                    solve(adj, v, result, visited);
               }
          }
     }

public:
     vector<int> dfs(vector<vector<int>> &adj)
     {
          // Code here
          int n = adj.size();
          vector<int> result;
          vector<int> visited(n, 0);

          solve(adj, 0, result, visited);
          return result;
     }
};
int main()
{
     vector<vector<int>> arr = {{2, 3, 1},
                                {0},
                                {0, 4},
                                {0},
                                {2}};

     Solution s1 ; 
     vector<int> result = s1.dfs(arr) ; 

     for(auto x : result)
     {
          cout << x <<" " ; 
     }
     return 0;
}