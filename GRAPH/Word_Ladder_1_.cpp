#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
     int ladderLength(string beginWord, string endWord, vector<string> &wordList)
     {
          unordered_set<string> dict(wordList.begin(), wordList.end());
          if (!dict.count(endWord))
          {
               return 0;
          }

          unordered_set<string> visited;
          queue<string> q;

          q.push(beginWord);
          visited.insert(beginWord);
          int level = 1;
          while (!q.empty())
          {
               int size = q.size();
               for (int i = 0; i < size; i++)
               {
                    string temp = q.front();
                    q.pop();
                    string original = temp;
                    for (int j = 0; j < temp.size(); j++)
                    {
                         for (char c = 'a'; c <= 'z'; c++)
                         {
                              temp[j] = c;
                              if (dict.count(temp) && !visited.count(temp))
                              {
                                   visited.insert(temp);
                                   q.push(temp);
                                   if (temp == endWord)
                                   {
                                        return level + 1;
                                   }
                              }
                         }
                         temp = original;
                    }
               }
               level++;
          }
          return 0;
     }
};
int main()
{

     Solution s1;

     string beginWord = "hit";
     string endWord = "cog";

     vector<string> wordList = {
         "hot",
         "dot",
         "dog",
         "lot",
         "log",
         "cog"};

     int ans = s1.ladderLength(beginWord, endWord, wordList);

     if (ans == 0)
     {
          cout << "No transformation sequence exists." << endl;
     }
     else
     {
          cout << "The length of the shortest transformation sequence is: " << ans << endl;
     }
     return 0;
}