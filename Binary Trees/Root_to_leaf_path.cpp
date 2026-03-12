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
vector<vector<int>> ans ; 

     void preOrder(Node *root , vector<int> &path)
     {
          if(root == NULL) return ; 
          path.push_back(root->data) ; 
          if(root->left == NULL && root->right == NULL)
          {
               ans.push_back(path) ; 
               path.pop_back() ; 
               return  ; 
          }
          preOrder(root->left , path) ; 
          preOrder(root->right , path) ;
          path.pop_back() ; 
     }
public:
     vector<vector<int>> Paths(Node *root)
     {
         vector<int> path ; 
         preOrder(root , path );
         return ans ; 
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
     vector<vector<int>> arr = s1.Paths(root);
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