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
          stack<Node *> st;
          st.push(root);
          while (!st.empty())
          {
               Node *temp = st.top();
               st.pop();
               arr.push_back(temp->data);
               if (temp->right)
               {
                    st.push(temp->right);
               }
               if (temp->left)
               {
                    st.push(temp->left);
               }
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

     Solution s1 ; 
     vector<int> arr = s1.preOrder(root) ; 
     for(auto x : arr)
     {
          cout << x <<"  " ; 
     }
     return 0;
}