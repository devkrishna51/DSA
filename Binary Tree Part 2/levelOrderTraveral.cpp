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
      
     vector<vector<int>> levelOrder(Node *root)
     {
          if(root == NULL)
          {
               return {{}} ; 
          }
          vector<vector<int>> result ;
          queue<Node*> q ; 
          q.push(root); 
          while(!q.empty()) 
          {
               int size = q.size() ; 
               vector<int> level ; 
               while(size > 0 )
               {
                    Node *temp = q.front() ; 
                    q.pop() ; 
                    level.push_back(temp->data) ; 
                    if(temp->left) 
                         q.push(temp->left) ; 
                    if(temp->right)
                         q.push(temp->right) ; 

                    size-- ; 
               }
               result.push_back(level) ; 
          }
          return result ; 
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
     vector<vector<int>> arr = s1.levelOrder(root);
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