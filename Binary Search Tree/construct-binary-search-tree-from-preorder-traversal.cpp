#include <bits/stdc++.h>
using namespace std;
struct TreeNode
{
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
class Solution
{
     TreeNode *insert(TreeNode *root, int data)
     {
          if (root == NULL)
          {
               TreeNode *newNode = new TreeNode(data);
               return newNode;
          }
          if (data < root->val)
          {
               root->left = insert(root->left, data);
          }
          else
          {
               root->right = insert(root->right, data);
          }
          return root;
     }

public:
     TreeNode *bstFromPreorder(vector<int> &preorder)
     {
          int n = preorder.size();
          TreeNode *root = NULL;
          for (int i = 0; i < n; i++)
          {
               root = insert(root, preorder[i]);
          }
          return root;
     }
};
int main()
{
     Solution s1;

     vector<int> preorder = {10, 5, 2, 7, 15, 12, 20};

     TreeNode *root = s1.bstFromPreorder(preorder);

     cout << "The BST has been constructed successfully." << endl;
     return 0;
}