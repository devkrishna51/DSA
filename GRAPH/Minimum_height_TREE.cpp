#include<bits/stdc++.h>
using namespace std ; 
class Solution {
public:
    vector<int> findMinHeightTrees(int n, vector<vector<int>>& edges) {
        if(n ==1 )
        {
            return {0} ; 
        }
        if(n == 2)
        {
            return {0,1} ; 
        }
        vector<vector<int>> adj(n)   ; 
        vector<int> degree(n , 0) ;
        for(auto edge : edges)
        {
            int u = edge[0] ; 
            int v = edge[1] ; 

            adj[u].push_back(v);
            adj[v].push_back(u);

            degree[u]++ ;
            degree[v]++ ; 
        }
        queue<int> q ; 
        int remain = n ; 
        for(int i = 0 ; i < degree.size() ; i++)
        {
            if(degree[i] == 1)
            {
                q.push(i) ; 
            }
        }
        while(!q.empty())
        {
            int size = q.size() ; 
            for(int i = 0 ; i < size ; i++)
            {
                int u = q.front() ; 
                q.pop() ; 

                for(auto v: adj[u]){
                    degree[v]-- ; 
                    if(degree[v]==1)
                    {
                        q.push(v) ; 
                    }
                }
            }
            remain -= size ; 
            if(remain <= 2)
            {
                break ; 
            }
         
        }
        vector<int> result ; 
        while(!q.empty())
        {
            result.push_back(q.front()) ; 
            q.pop() ; 
        }
        return result ; 

    }
};
int main()
{

     return 0 ; 
}