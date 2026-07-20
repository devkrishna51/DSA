#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     bool canFinish(int numCources, vector<vector<int>> &edges)
     {

          vector<vector<int>> adj(numCources);
          vector<int> indegree(numCources);
          for (auto edge : edges)
          {
               int u = edge[0];
               int v = edge[1];

               adj[v].push_back(u);
               indegree[u]++;
          }

          queue<int> q;
          for (int i = 0; i < numCources; i++)
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
               if (count == numCources)
               {
                    return true;
               }
               for (auto v : adj[u])
               {
                    indegree[v]--;
                    if (indegree[v] == 0)
                    {
                         q.push(v);
                    }
               }
          }
          return false;
     }
};
int main()
{
     Solution s1;

     int numCourses = 15;

     vector<vector<int>> prerequisites = {
         {1, 0},
         {2, 0},
         {3, 1},
         {3, 2},
         {4, 1},
         {5, 2},
         {6, 3},
         {6, 4},
         {7, 5},
         {8, 6},
         {9, 6},
         {10, 7},
         {10, 8},
         {11, 9},
         {12, 10},
         {13, 11},
         {14, 12}};

     if (s1.canFinish(numCourses, prerequisites))
     {
          cout << "Yes, it is possible to finish all the courses." << endl;
     }
     else
     {
          cout << "No, it is not possible to finish all the courses." << endl;
     }

     return 0;
}