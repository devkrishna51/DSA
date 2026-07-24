#include <bits/stdc++.h>
using namespace std;

class KthLargest
{
     priority_queue<int, vector<int>, greater<int>> q;
     int kth;

public:
     KthLargest(int k, vector<int> &nums)
     {
          kth = k;
          for (auto i : nums)
          {
               int size = q.size();
               if (size < k)
               {
                    q.push(i);
               }
               else
               {
                    int ele = q.top();
                    if (i > ele)
                    {
                         q.pop();
                         q.push(i);
                    }
                    else
                    {
                         continue;
                    }
               }
          }
     }

     int add(int val)
     {
          if (q.size() < kth)
          {
               q.push(val);
               return q.top();
          }
          else if (val > q.top())
          {
               q.pop();
               q.push(val);
               return q.top();
          }
          else
          {
               return q.top();
          }
     }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
int main()
{
     int k = 3;

     vector<int> nums = {4, 5, 8, 2};

     KthLargest s1(k, nums);

     cout << "After adding 3, the 3rd largest element is: " << s1.add(3) << endl;

     cout << "After adding 5, the 3rd largest element is: " << s1.add(5) << endl;

     cout << "After adding 10, the 3rd largest element is: " << s1.add(10) << endl;

     cout << "After adding 9, the 3rd largest element is: " << s1.add(9) << endl;

     cout << "After adding 4, the 3rd largest element is: " << s1.add(4) << endl;
     return 0;
}