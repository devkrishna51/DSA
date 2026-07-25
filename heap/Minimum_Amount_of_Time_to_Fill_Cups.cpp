#include <bits/stdc++.h>
using namespace std;
class Solution
{

public:
     int fillCups(vector<int> &arr)
     {

          priority_queue<int> pq;
          for (int i = 0; i < arr.size(); i++)
          {
               if (arr[i] != 0)
                    pq.push(arr[i]);
          }
          if (pq.empty())
          {
               return 0;
          }
          int count = 0;
          while (pq.size() >= 2)
          {

               int first = pq.top();
               pq.pop();
               int second = pq.top();
               pq.pop();

               if (first - 1 > 0)
                    pq.push(first - 1);
               if (second - 1 > 0)
                    pq.push(second - 1);

               count++;
          }
          while (!pq.empty())
          {

               int ele = pq.top();
               pq.pop();

               if (ele - 1 > 0)
               {
                    pq.push(ele - 1);
               }
               count++;
          }
          return count;
     }
};
int main()
{
     Solution s1;

     vector<int> amount = {5, 4, 4};

     int ans = s1.fillCups(amount);

     cout << "The minimum time required to fill all the cups is: " << ans << " seconds." << endl;
     return 0;
}