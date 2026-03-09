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
          stack<Node *> st;
          Node *curr = root;
          while (curr != NULL || !st.empty())
          {
             if(curr != NULL)
             {
               st.push(curr) ; 
               curr = curr->left ; 
             }
             else
             {
               Node *temp = st.top() ; 
               st.pop() ; 
               arr.push_back(temp->data) ; 
             
                    curr = temp->right ; 
          
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
     vector<int> arr = s1.preOrder(root);
     for (auto x : arr)
     {
          cout << x << "  ";
     }
     return 0;
}