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
     vector<int> MorrisInorder(Node *root)
     {
          vector<int> arr;
          Node *curr = root;
          while (curr)
          {
               if (curr->left == NULL)
               {
                    arr.push_back(curr->data);
                    curr = curr->right;
               }
               else
               {
                    Node *temp = curr->left;
                    while (temp->right != NULL && temp->right != curr)
                    {
                         temp = temp->right;
                    }
                    if (temp->right == NULL)
                    {
                         temp->right = curr;
                         curr = curr->left;
                    }
                    else
                    {
                         temp->right = NULL;
                         arr.push_back(curr->data);
                         curr = curr->right;
                    }
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
     vector<int> arr = s1.MorrisInorder(root);
     for (auto x : arr)
     {
          cout << x << "  ";
     }
     return 0;
}