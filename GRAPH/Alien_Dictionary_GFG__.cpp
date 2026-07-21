#include <bits/stdc++.h>
using namespace std;
class Solution
{
     pair<char, char> isCheck(vector<string> &words, int first, int sec)
     {
          int n = min(words[first].size(), words[sec].size());
          for (int i = 0; i < n; i++)
          {
               if (words[first][i] != words[sec][i])
               {
                    return {words[first][i], words[sec][i]};
               }
          }
          if (words[first].size() > words[sec].size())
          {
               return {'#', '#'};
          }
          return {'\0', '\0'};
     }

public:
     string findOrder(vector<string> &words)
     {
          // code here
          int n = words.size();
          vector<bool> visited(26, false);
          vector<vector<int>> adj(26);
          vector<int> indegree(26);
          for (auto word : words)
          {
               for (auto c : word)
               {
                    visited[c - 'a'] = true;
               }
          }
          for (int i = 0; i < n - 1; i++)
          {

               auto temp = isCheck(words, i, i + 1);

               if (temp.first == '#')
               {
                    return "";
               }
               if (temp.first != '\0')
               {
                    int u = temp.first - 'a';
                    int v = temp.second - 'a';

                    adj[u].push_back(v);
                    indegree[v]++;
               }
          }
          queue<int> q;
          int count = 0;
          for (int i = 0; i < 26; i++)
          {
               if (visited[i] == true)
               {
                    count++;
                    if (indegree[i] == 0)
                    {
                         q.push(i);
                    }
               }
          }
          string result = "";
          while (!q.empty())
          {
               int u = q.front();
               q.pop();
               result.push_back(u + 'a');

               for (auto v : adj[u])
               {
                    indegree[v]--;
                    if (indegree[v] == 0)
                    {
                         q.push(v);
                    }
               }
          }
          if (result.size() != count)
          {
               return "";
          }
          return result;
     }
};
int main()
{
     Solution s1;

     vector<string> words = {
         "baa",
         "abcd",
         "abca",
         "cab",
         "cad"};

     int N = 5;
     int K = 4;

     string ans = s1.findOrder(words);

     cout << "The order of characters in the alien dictionary is: " << ans << endl;
     return 0;
}