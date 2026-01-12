#include <iostream>
#include <stack>
#include <vector>
using namespace std;
class Solution
{

public:
    void deleteMid(stack<int>& s) {
        
        stack<int> s2(s) ; 
        int count = 0 ; 
        while(!s2.empty())
        {
            count ++ ; 
            s2.pop() ; 
            
        }
        int half = count / 2 ; 
        vector<int> arr ; 
        for(int i = 0 ; i < half ; i++)
        {
            arr.push_back(s.top()) ; 
            s.pop() ; 
        }
        s.pop() ; 
        for(int i = arr.size() -1 ; i >= 0 ; i--)
        {
            s.push(arr[i]) ; 
        }
        
    }
};
int main()
{
     stack<int> s;
     s.push(1);
     s.push(2);
     s.push(3);
     s.push(4);
     s.push(5);
     s.push(6);
     s.push(7);
     Solution s1;
     s1.deleteMid(s);

     while (!s.empty())
     {
          cout << s.top() << endl;
          s.pop();
     }

     return 0;
}