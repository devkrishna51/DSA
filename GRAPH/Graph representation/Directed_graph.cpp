#include <bits/stdc++.h>
using namespace std;
class Graph
{
     int V;
     vector<vector<int>> adj;

public:
     Graph(int v)
     {
          V = v;
          adj.resize(V);
     }
     void addEdge(int u, int v)
     {
          if (u >= V || v >= V || u < 0 || v < 0)
          {
               cout << "Invalid vertex\n";
               return;
          }

          adj[u].push_back(v);
        
     }

     void print()
     {
          for (int i = 0; i < V; i++)
          {
               cout << i << " : [";
               for (int j = 0; j < adj[i].size(); j++)
               {
                    cout << adj[i][j] << " ";
               }
               cout << "]" << endl;
          }
     }
};

int main()
{

     Graph g(5);

     g.addEdge(0, 1);
     g.addEdge(0, 2);
     g.addEdge(0, 3);

     g.addEdge(1, 3);
     g.addEdge(1, 4);

     g.addEdge(2, 4);

     g.addEdge(3, 4);

     g.print();
     return 0;
}