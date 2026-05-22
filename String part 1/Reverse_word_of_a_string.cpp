#include<bits/stdc++.h>
using namespace std ; 

class Solution {
public:
    string reverseWords(string s) {
        vector<string> arr ; 
        string temp = "" ; 
        for(int i = 0 ; s[i] != '\0' ; i++)
        {
           
            if(s[i] == ' ')
            {
                if(temp != "")
                {
                    arr.push_back(temp);
                    temp = "";
                }
            }
            else
            {
                temp += s[i] ; 
            }
        }
        arr.push_back(temp) ; 
        string ans = ""; 
        for(int i = arr.size()-1 ; i >= 0 ; i--)
        {
            if(arr[i] != "")
            {
                ans += arr[i] ; 
                if(i != 0)
                {
                    ans += ' '; 
                }
            }
        }
        return ans ; 
    }
};
int main()
{
     string s = "  hello world  " ;
     Solution s1 ; 
     string result = s1.reverseWords(s) ; 
     cout << result ; 
     return 0 ; 
}