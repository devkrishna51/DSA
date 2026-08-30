#include <bits/stdc++.h>
using namespace std;

int main()
{
     int n;
     cin >> n;
     vector<int> arr;
     for (int i = 0; i < n; i++)
     {
          int x;
          cin >> x;
          arr.push_back(x);
     }
     pair<int, int> minValue = {arr[0], 0};
     pair<int, int> maxValue = {arr[0], 0};
     for (int i = 0; i < n; i++)
     {
          if (arr[i] <= minValue.first)
          {
               minValue = {arr[i], i};
          }
          if (arr[i] > maxValue.first)
          {
               maxValue = {arr[i], i};
          }
     }
     int count = 0;
     for (int i = maxValue.second; i > 0; i--)
     {
          count++;
     }
     for (int i = minValue.second; i < n - 1; i++)
     {
          count++;
     }
     if (maxValue.second > minValue.second)
     {
          count--;
     }
     cout << count << endl;
     return 0;
}