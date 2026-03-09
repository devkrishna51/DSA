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
     vector<int> topView(Node *root)
     {
          vector<int> arr;
          if (root == NULL)
          {
               return arr;
          }
          queue<pair<Node *, int>> q;
          map<int, int> mp;
          q.push({root, 0});
          while (!q.empty())
          {
               Node *curr = q.front().first;
               int currVal = q.front().second;
               q.pop();
               if (mp.find(currVal) == mp.end())
               {
                    mp[currVal] = curr->data;
               }
               if(curr->left)
                    q.push({curr->left , currVal-1}) ; 
               if(curr->right)
                    q.push({curr->right , currVal+1}) ; 
          }
          for(auto x : mp)
          {
               arr.push_back(x.second) ; 
          }
          return arr;
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
     vector<int> arr = s1.topView(root);
     for (auto x : arr)
     {
          cout << x << "  ";
     }
     return 0;
}