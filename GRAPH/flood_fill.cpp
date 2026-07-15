// You are given an image represented by an m x n grid of integers image, where image[i][j]
//  represents the pixel value of the image.
//  You are also given three integers sr, sc,
//  and color. Your task is to perform a flood fill
//  on the image starting from the pixel image[sr][sc].

// To perform a flood fill:

// Begin with the starting pixel and change its color to color.
// Perform the same process for each pixel that is directly
// adjacent (pixels that share a side with the original pixel,
// either horizontally or vertically) and shares the same color as the starting pixel.
// Keep repeating this process by checking neighboring pixels
// of the updated pixels and modifying their color if it matches the original color of the starting pixel.
// The process stops when there are no more adjacent pixels of the original color to update.
// Return the modified image after performing the flood fill.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
     void DFS(vector<vector<int>> &image, int row, int col, int color, int oldcolor)
     {
          if (row >= image.size() || col >= image[0].size() || row < 0 || col < 0)
          {
               return;
          }
          if (image[row][col] != oldcolor)
          {
               return;
          }

          image[row][col] = color;
          DFS(image, row - 1, col, color, oldcolor);
          DFS(image, row + 1, col, color, oldcolor);
          DFS(image, row, col - 1, color, oldcolor);
          DFS(image, row, col + 1, color, oldcolor);
     }

public:
     vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
     {

          int row = image.size();
          int col = image[0].size();

          if (sr >= row || sc >= col)
          {
               return image;
          }
          if (image[sr][sc] == color)
          {
               return image;
          }
          int oldcolor = image[sr][sc];
          DFS(image, sr, sc, color, oldcolor);
          return image;
     }
};
int main()
{
     vector<vector<int>> image = {
         {1, 1, 1},
         {1, 1, 0},
         {1, 0, 1}};

     int sr = 1;
     int sc = 1;
     int color = 2;

     Solution s1 ; 
      
     vector<vector<int>> result =  s1.floodFill(image , sr , sc , color) ; 

     cout << "Result is : " << endl ; 
     for(auto i : result)
     {
          for(auto j : i)
          {
               cout << j << " " ; 
          }
          cout << endl ; 
     }
     return 0;
}