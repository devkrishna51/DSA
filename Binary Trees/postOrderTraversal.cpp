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
     vector<int> preOrder(Node *root)
     {
          vector<int> arr;
          if (root == NULL)
          {
               return arr;
          }
          stack<Node *> st ,st2 ;
         
          st.push(root) ;
          while(!st.empty())
          {
               Node *temp = st.top() ; 
               st.pop() ; 
               st2.push(temp) ; 
               if(temp->left)
                    st.push(temp->left) ; 
               if(temp->right)
                    st.push(temp->right) ; 
          } 
          while(!st2.empty())
          {
               arr.push_back(st2.top()->data) ; 
               st2.pop() ; 
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
     vector<int> arr = s1.preOrder(root);
     for (auto x : arr)
     {
          cout << x << "  ";
     }
     return 0;
}