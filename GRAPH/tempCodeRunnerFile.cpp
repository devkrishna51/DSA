#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
     bool isBipartite(vector<vector<int>> &adj)
     {
          int n = adj.size();
          vector<int> color(n, -1);
          for (int i = 0; i < n; i++)
          {

               if (color[i] == -1)
               {
                    color[i] = 0;
                    queue<int> q;
                    q.push(i);
                    while (!q.empty())
                    {
                         int u = q.front();
                         q.pop();

                         for (auto v : adj[u])
                         {
                              if (color[v] == -1)
                              {
                                   if (color[u] == 0)
                                        color[v] = 1;
                                   else
                                        color[v] = 0;

                                   q.push(v);
                              }
                              else
                              {
                                   if (color[u] == color[v])
                                   {
                                        return false;
                                   }
                              }
                         }
                    }
               }
          }
          return true;
     }
};
int main()
{

     vector<vector<int>> adj = {
         {},
         {4, 5},
         {5},
         {6},
         {1},
         {1, 2},
         {3}};
     Solution s1;

     bool result = s1.isBipartite(adj) ; 

     if(result)
          cout << "Graph is Bipartite " ; 
     else 
          cout << "Graph is not bipartite" ; 
     return 0;
}