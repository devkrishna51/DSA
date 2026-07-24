#include <bits/stdc++.h>
using namespace std;
class Solution
{
    vector<vector<string>> result;

    void DFS(unordered_map<string, vector<string>> &mp, vector<string> &arr, string current, string beginWord)
    {

        arr.push_back(current);

        if (current == beginWord)
        {
            reverse(arr.begin(), arr.end());
            result.push_back(arr);
            reverse(arr.begin(), arr.end());

            arr.pop_back();
            return;
        }

        for (auto parent : mp[current])
        {

            DFS(mp, arr, parent, beginWord);
        }

        arr.pop_back();
    }

public:
    vector<vector<string>> findLadders(string beginWord, string endWord, vector<string> &wordList)
    {

        unordered_set<string> dict(wordList.begin(), wordList.end());

        unordered_map<string, vector<string>> mp;

        if (!dict.count(endWord))
        {
            return {};
        }

        unordered_set<string> visited;

        queue<string> q;

        q.push(beginWord);
        visited.insert(beginWord);

        while (!q.empty())
        {

            int size = q.size();

            unordered_set<string> marked;

            bool found = false;

            for (int i = 0; i < size; i++)
            {

                string temp = q.front();
                q.pop();

                for (int j = 0; j < temp.size(); j++)
                {
                    for (char c = 'a'; c <= 'z'; c++)
                    {

                        string temp2 = temp;

                        if (c == temp2[j])
                        {
                            continue;
                        }

                        temp2[j] = c;

                        if (!visited.count(temp2) && dict.count(temp2))
                        {
                            if (!marked.count(temp2))
                            {
                                q.push(temp2);
                            }

                            marked.insert(temp2);
                            mp[temp2].push_back(temp);

                            if (temp2 == endWord)
                            {
                                found = true;
                            }
                        }
                    }
                }
            }

            for (auto node : marked)
            {
                visited.insert(node);
            }
            if (found)
            {
                break;
            }
        }

        vector<string> arr;
        DFS(mp, arr, endWord, beginWord);
        return result;
    }
};
int main()
{
    Solution s1;

    string beginWord = "cold";
    string endWord = "warm";

    vector<string> wordList = {
        "cord",
        "card",
        "ward",
        "warm",
        "word",
        "worm",
        "core",
        "care"};

    vector<vector<string>> ans = s1.findLadders(beginWord, endWord, wordList);

    if (ans.empty())
    {
        cout << "No transformation sequence exists." << endl;
    }
    else
    {
        cout << "All shortest transformation sequences are:" << endl;

        for (auto &path : ans)
        {
            for (string &word : path)
            {
                cout << word << " ";
            }
            cout << endl;
        }
    }
    return 0;
}