#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     vector<int> findOrder(int numCourses, vector<vector<int>> &edges)
     {

          vector<vector<int>> adj(numCourses);
          vector<int> indegree(numCourses, 0);
          for (auto edge : edges)
          {
               int u = edge[0];
               int v = edge[1];

               adj[v].push_back(u);
               indegree[u]++;
          }
          queue<int> q;
          vector<int> result;
          for (int i = 0; i < numCourses; i++)
          {
               if (indegree[i] == 0)
               {
                    q.push(i);
                    result.push_back(i);
               }
          }
          while (!q.empty())
          {
               int u = q.front();
               q.pop();

               for (auto v : adj[u])
               {
                    indegree[v]--;
                    if (indegree[v] == 0)
                    {
                         q.push(v);
                         result.push_back(v);
                    }
               }
          }
          if (result.size() == numCourses)
          {
               return result;
          }
          else
          {
               return {};
          }
     }
};
int main()
{
     Solution s1;

     int numCourses = 7;

     vector<vector<int>> prerequisites = {
         {1, 0},
         {2, 0},
         {3, 1},
         {4, 1},
         {5, 2},
         {6, 4}};

     vector<int> order = s1.findOrder(numCourses, prerequisites);

     if (order.empty())
     {
          cout << "It is not possible to complete all the courses because the prerequisite graph contains a cycle." << endl;
     }
     else
     {
          cout << "A valid order to complete all the courses is:" << endl;

          for (int course : order)
          {
               cout << course << " ";
          }

          cout << endl;
     }

     return 0;
}