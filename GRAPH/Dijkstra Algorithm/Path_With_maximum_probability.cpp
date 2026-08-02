#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     double maxProbability(int n, vector<vector<int>> &edges,
                           vector<double> &succProb, int start_node,
                           int end_node)
     {
          vector<vector<pair<int, double>>> adj(n);
          for (int i = 0; i < edges.size(); i++)
          {
               int u = edges[i][0];
               int v = edges[i][1];
               double wt = succProb[i];

               adj[u].push_back({v, wt});
               adj[v].push_back({u, wt});
          }
          priority_queue<pair<double, int>> q;
          q.push({1.0, start_node});
          vector<double> prob(n, 0.0);
          prob[start_node] = 1.0;

          while (!q.empty())
          {
               pair<double , int> p  = q.top();
               q.pop();
               double wt = p.first ; 
               int u = p.second ; 
               if (wt < prob[u])
               {
                    continue;
               }
               for (auto v : adj[u])
               {
                    int node = v.first;
                    double currWt = v.second;
                    double newWt = currWt * wt;
                    if (newWt > prob[node])
                    {
                         prob[node] = newWt;
                         q.push({newWt, node});
                    }
               }
          }
          return prob[end_node];
     }
};
int main()
{
     Solution s1;

     int n = 5;

     vector<vector<int>> edges = {
         {0, 1},
         {0, 2},
         {1, 2},
         {1, 3},
         {2, 4},
         {3, 4}};

     vector<double> succProb = {
         0.8,
         0.4,
         0.6,
         0.5,
         0.7,
         0.9};

     int start = 0;
     int end = 4;

     double ans = s1.maxProbability(n, edges, succProb, start, end);

     cout << fixed << setprecision(5);
     cout << "The maximum probability of reaching node "
          << end << " from node "
          << start << " is: "
          << ans << endl;
     return 0;
}