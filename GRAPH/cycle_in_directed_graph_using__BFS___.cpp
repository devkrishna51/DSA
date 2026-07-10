#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
     bool isCyclic(int V, vector<vector<int>> &edges)
     {

          vector<vector<int>> adj(V);
          vector<int> indegree(V, 0);
          for (auto edge : edges)
          {
               int u = edge[0];
               int v = edge[1];

               adj[u].push_back(v);
               indegree[v]++;
          }

          queue<int> q;
          for (int i = 0; i < V; i++)
          {
               if (indegree[i] == 0)
               {
                    q.push(i);
               }
          }

          int count = 0;
          while (!q.empty())
          {
               int u = q.front();
               q.pop();
               count++;
               for (auto v : adj[u])
               {
                    indegree[v]--;
                    if (indegree[v] == 0)
                    {
                         q.push(v);
                    }
               }
          }
          if (count < V)
               return true;
          else
               return false;
     }
};
int main()
{
     int V = 4;
     vector<vector<int>> edges = {
         {0, 1},
         {1, 2},
         {2, 3},
         {3, 1}
     };

     Solution s1 ; 
     bool result = s1.isCyclic(V , edges) ; 

     if(result)
          cout << "Graph have cycle" <<endl ; 
     else 
          cout << "Graph doe not have cycle" <<endl ;

     return 0;
}