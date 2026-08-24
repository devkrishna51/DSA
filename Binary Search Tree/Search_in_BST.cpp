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
public:
     TreeNode *searchBST(TreeNode *root, int val)
     {
          if (root == NULL)
          {
               return NULL;
          }
          if (val == root->val)
          {
               return root;
          }
          if (val < root->val)
          {
               return searchBST(root->left, val);
          }
          else
          {
               return searchBST(root->right, val);
          }
          return root;
     }
};
int main()
{
     Solution s1;
     TreeNode *root = new TreeNode(8);

     root->left = new TreeNode(3);
     root->right = new TreeNode(10);

     root->left->left = new TreeNode(1);
     root->left->right = new TreeNode(6);

     root->right->right = new TreeNode(14);

     root->left->right->left = new TreeNode(4);
     root->left->right->right = new TreeNode(7);

     int key = 6;

     bool ans = s1.searchBST(root, key);

     if (ans)
     {
          cout << "Yes, the key " << key << " is present in the BST." << endl;
     }
     else
     {
          cout << "No, the key " << key << " is not present in the BST." << endl;
     }
     return 0;
}