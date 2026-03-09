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
     vector<int> leftView(Node *root)
     {
          vector<int> arr;
          if (root == NULL)
          {
               return arr;
          }
          queue<Node *> q ;
          q.push(root) ; 
          while(!q.empty())
          {
               int size = q.size() ; 
               int count =0 ; 
               while(size > 0)
               {    
                    Node *temp = q.front() ; 
                    q.pop() ; 
                    if(count == 0)
                    {
                         arr.push_back(temp->data) ; 
                         count ++ ;
                    }
                    if(temp->left) 
                         q.push(temp->left) ; 
                    if(temp->right)
                         q.push(temp->right) ;
                         
                    size-- ; 
               }
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
     vector<int> arr = s1.leftView(root);
     for (auto x : arr)
     {
          cout << x << "  ";
     }
     return 0;
}