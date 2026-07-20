// just reverse your thinking in this question . 
#include<bits/stdc++.h>
using namespace std ; 
class Solution {
    void DFS(vector<vector<int>>& heights , vector<vector<bool>>& visited , int prev , int row , int col)
    {
        if(row >= heights.size() || col >= heights[0].size() || row < 0 || col < 0)
        {
            return ;
        }
        if(visited[row][col] == true){
            return ; 
        }
        if(heights[row][col] < prev){
            return  ; 
        }
        visited[row][col] = true ; 
        DFS(heights , visited , heights[row][col] , row+1 , col) ; 
        DFS(heights , visited , heights[row][col] , row-1 , col) ; 
        DFS(heights , visited , heights[row][col] , row , col+1) ; 
        DFS(heights , visited , heights[row][col] , row , col-1) ; 
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n = heights.size() ; 
        int m = heights[0].size() ; 

        vector<vector<bool>> pacific ( n , vector<bool> (m , false)) ; 
        vector<vector<bool>> atlantic ( n , vector<bool> (m , false)) ; 

        for(int j = 0 ; j < m ; j++)
        {
            DFS(heights , pacific , heights[0][j] , 0 , j) ; 
        }
        for(int i = 0 ; i < n ; i++)
        {
            DFS(heights , pacific , heights[i][0] , i , 0) ; 
        }
        for(int j = 0 ; j < m ; j++)
        {
            DFS(heights , atlantic , heights[n-1][j] , n-1 , j) ; 
        }
        for(int i = 0 ; i < n ; i++)
        {
            DFS(heights , atlantic , heights[i][m-1] , i , m-1) ; 
        }
         vector<vector<int>>  result ; 

        for(int i = 0 ; i < n ; i ++)
        {
            for(int j = 0 ; j < m ; j++)
            {
                if(pacific[i][j] && atlantic[i][j])
                {
                    result.push_back({i,j}) ; 
                }
            }
        }
        return result ; 


    }
};
int main()
{

     return 0 ; 
}