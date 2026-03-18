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
     bool isSameTree(Node *root, Node *root2)
     {
          if(root == NULL && root2 == NULL)
          {
               return true ; 
          }
          if(root!=NULL && root2 == NULL)
          {
               return false ; 
          }
          if(root == NULL && root2 != NULL)
          {
               return false ; 
          }
          bool left = isSameTree(root->left , root2->left) ; 
          bool right = isSameTree(root->right , root2->right) ; 
          bool value = root->data == root2->data ; 
          if(left && right && value)
          {
               return true ; 
          }
          else{
               return false ; 
          }
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

     Node *root2 = new Node(1);

     root2->left = new Node(2);
     root2->right = new Node(3);

     root2->left->left = new Node(4);
     root2->left->right = new Node(5);

     root2->right->left = new Node(6);
     root2->right->right = new Node(7);

     Solution s1;
     bool result = s1.isSameTree(root, root2);
     if (result)
     {
          cout << "the tree is Same " << endl
               << endl;
     }
     else
     {
          cout << "the tree is not same " << endl
               << endl;
     }
     return 0;
}