#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int isNegativeWeightCycle(int n, vector<vector<int>> edges)
     {
          // Code here
          vector<int> dist(n, 0);
          for (int i = 0; i < n - 1; i++)
          {

               for (auto edge : edges)
               {

                    int u = edge[0];
                    int v = edge[1];
                    int wt = edge[2];

                    if (dist[u] + wt < dist[v])
                    {
                         dist[v] = dist[u] + wt;
                    }
               }
          }
          for (auto edge : edges)
          {

               int u = edge[0];
               int v = edge[1];
               int wt = edge[2];

               if (dist[u] != 0 && dist[u] + wt < dist[v])
               {
                    return 1;
               }
          }

          return 0;
     }
};
int main()
{
     Solution s1;

     int n = 4;

     vector<vector<int>> edges = {
         {0, 1, 1},
         {1, 2, -1},
         {2, 3, -1},
         {3, 1, -1}};

     int ans = s1.isNegativeWeightCycle(n, edges);

     if (ans == 1)
     {
          cout << "The graph contains a negative weight cycle." << endl;
     }
     else
     {
          cout << "The graph does not contain a negative weight cycle." << endl;
     }
     return 0;
}