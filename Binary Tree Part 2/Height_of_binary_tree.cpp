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
    int height(Node *root)
    {
          if(root == NULL)
          {
               return 0 ; 
          }

          int left = height(root->left) ; 
          int right = height(root->right) ; 
          
          return max(left , right) +1 ; 
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
     int result = s1.height(root);
     cout << "\nThe Maximum Depth of Binary Tree is : " << result <<endl <<endl; 
     return 0;
}