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
     TreeNode *buildBST(vector<int> &nums, int left, int right)
     {
          if (left > right)
          {
               return nullptr;
          }

          int mid = left + (right - left) / 2;

          TreeNode *root = new TreeNode(nums[mid]);

          root->left = buildBST(nums, left, mid - 1);
          root->right = buildBST(nums, mid + 1, right);

          return root;
     }

public:
     TreeNode *sortedArrayToBST(vector<int> &nums)
     {
          return buildBST(nums, 0, nums.size() - 1);
     }
};
int main()
{
     Solution s1;

     vector<int> nums = {-15, -10, -6, -3, 0, 4, 8, 12, 17};

     TreeNode *root = s1.sortedArrayToBST(nums);

     cout << "The height-balanced BST has been created successfully." << endl;

     return 0;
}