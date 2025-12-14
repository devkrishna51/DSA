#include <iostream>
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
          left = NULL;
          right = NULL;
     }
};
class Solution
{
public:
     Node *root;

     Solution()
     {
          root = nullptr;
     }
     Node *Insertion(Node *root, int key)
     {
          if (root == NULL)
          {
               Node *newNode = new Node(key);
               return newNode;
          }

          if (key < root->data)
          {
               root->left = Insertion(root->left, key);
          }
          else
          {
               root->right = Insertion(root->right, key);
          }
          return root;
     }
     void print(Node *root)
     {
          if (root == nullptr)
          {
               return;
          }
          cout << root->data << " ";
          print(root->left);
          print(root->right);
     }
};
int main()
{

     Solution s1;
     s1.root = s1.Insertion(s1.root, 10); 
     s1.root = s1.Insertion(s1.root, 5);
     s1.root = s1.Insertion(s1.root, 20);

     s1.print(s1.root) ; 
     return 0;
}