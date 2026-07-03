#include<bits/stdc++.h>
using namespace std ; 
class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int n = adj.size() ; 
        vector<int> visited(n , 0) ; 
        vector<int> result ; 
    
    
        queue<int> q ;
        q.push(0) ; 
        result.push_back(0) ; 
        visited[0] = 1 ; 
        
        while(!q.empty())
        {
            int u = q.front() ; 
            q.pop() ; 
            
            for(auto v : adj[u])
            {
                if(visited[v] == 0)
                {
                    visited[v] = 1 ; 
                    result.push_back(v) ; 
                    q.push(v) ; 
                }
            }
            
            
        }
        return result ; 
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
     vector<int> result = s1.bfs(arr) ; 

     for(auto x : result)
     {
          cout << x <<" " ; 
     }
     return 0 ; 
}