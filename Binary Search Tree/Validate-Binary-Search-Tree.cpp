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
     bool check(TreeNode *root, long long low, long long high)
     {
          if (root == NULL)
          {
               return true;
          }
          if (root->val <= low || root->val >= high)
          {
               return false;
          }
          bool leftCheck = check(root->left, low, root->val);
          bool rightCheck = check(root->right, root->val, high);

          return leftCheck && rightCheck;
     }

public:
     bool isValidBST(TreeNode *root)
     {
          return check(root, LLONG_MIN, LLONG_MAX);
     }
};

int main()
{
     Solution s1;

     TreeNode *root = new TreeNode(5);

     root->left = new TreeNode(1);
     root->right = new TreeNode(4);

     root->right->left = new TreeNode(3);
     root->right->right = new TreeNode(6);

     bool ans = s1.isValidBST(root);

     if (ans)
          cout << "Yes, it is a valid Binary Search Tree." << endl;
     else
          cout << "No, it is not a valid Binary Search Tree." << endl;
     return 0;
}