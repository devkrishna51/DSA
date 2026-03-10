#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
     int data;
     Node *left;
     Node *right;
     Node(int n)
     {
          data = n;
          left = right = nullptr;
     }
};
class Solution
{

public:
     vector<vector<int>> verticalOrder(Node *root)
     {
          vector<vector<int>> arr;
          queue<pair<Node *, pair<int, int>>> q;
          map<int, map<int, vector<int>>> m;
          q.push({root, {0, 0}});
          while (!q.empty())
          {
               auto it = q.front();
               q.pop();
               Node *temp = it.first;
               int x = it.second.first;
               int level = it.second.second;

               m[x][level].push_back(temp->data);

               if (temp->left)
               {
                    q.push({temp->left, {x - 1, level + 1}});
               }
               if (temp->right)
               {
                    q.push({temp->right, {x + 1, level + 1}});
               }
          }
          for (auto col : m)
          {
               vector<int> temp;
               for (auto row : col.second)
               {
                    sort(row.second.begin(), row.second.end());
                    for (auto v : row.second)
                    {
                         temp.push_back(v);
                    }
               }
               arr.push_back(temp);
          }
          return arr ; 
     }
};
int main()
{

     Node *root = new Node(1);

     root->left = new Node(2);
     root->right = new Node(3);

     root->left->left = new Node(4);
     root->left->right = new Node(5);

     root->right->left = new Node(6);
     root->right->right = new Node(7);

     Solution s1;
     vector<vector<int>> arr = s1.verticalOrder(root);
     for (auto x : arr)
     {
          for(auto x2 :x )
          {
               cout << x2 <<"  " ; 

          }
          cout << endl ; 
     }
     return 0;
}