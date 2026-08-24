#include <bits/stdc++.h>
using namespace std;
class Node
{

public:
  int data;
  Node *left;
  Node *right;
  Node(int v)
  {
    data = v;
    left = right = NULL;
  }
};
Node *insert(Node *root, int v)
{
  if (root == NULL)
  {
    Node *newNode = new Node(v);
    return newNode;
  }
  if (v < root->data)
  {
    root->left = insert(root->left, v);
  }
  else
  {
    root->right = insert(root->right, v);
  }
  return root;
}
void inOrder(Node *root)
{
  if (root == NULL)
    return;

  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}
void preOrder(Node *root)
{
  if (root == NULL)
    return;

  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}
void postOrder(Node *root)
{
  if (root == NULL)
    return;

  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

int main()
{
  vector<int> arr = {3, 2, 1, 5, 6, 4};
  Node *root = NULL;
  for (int i = 0; i < arr.size(); i++)
  {
    root = insert(root, arr[i]);
  }

  cout << "In-Order : ";  inOrder(root); 
  cout << "\nPre - Order : " ;   preOrder(root);
  cout <<"\nPost - Order : " ; postOrder(root);
  return 0;
}