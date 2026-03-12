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

     int deep = 0;
     void checkDepth(Node *root, int count)
     {
          if (root == NULL)
          {
               deep = max(deep, count);
               return;
          }
          checkDepth(root->left, count + 1);
          checkDepth(root->right, count + 1);
     }

public:
     int Depth(Node *root)
     {
          if (root == NULL)
               return 0;

          checkDepth(root, 0);
          return deep;
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
     int result = s1.Depth(root);
     cout << "\nThe Maximum Depth of Binary Tree is : " << result <<endl <<endl; 
     return 0;
}