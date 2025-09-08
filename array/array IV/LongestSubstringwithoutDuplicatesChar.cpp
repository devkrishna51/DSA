#include <iostream>
#include <unordered_set>
using namespace std;
class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        unordered_set<char> st;
        int left = 0, maxLen = 0;

        for (int right = 0; right < s.size(); right++)
        {

            while (st.count(s[right]))
            {
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};

int main()
{
    string str = "abcabcbb";
    Solution s1;
    int result = s1.lengthOfLongestSubstring(str);
    cout <<"There are :  " <<result  << " Substrings "<<endl ; 
    return 0;
}