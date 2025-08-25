#include <iostream>
#include <vector>
using namespace std;
class Solution
{
    public: 
    void nextPermutation(vector<int> &arr)
    {
        int n = arr.size();
        int pivot  = -1;
 
    
        for(int i = n-2 ; i >= 0 ; i--)
        {
            if(arr[i] < arr[i+1])
            {
                pivot= i ; 
                break ; 
            }
        }
        if (pivot == -1)
        {
            return ; 
        }
        for(int i = n-1 ; i >=0 ; i--)
        {
            if(arr[i] > arr[pivot])
            {
                int temp = arr[i] ; 
                arr[i] = arr[pivot] ; 
                arr[pivot] = temp ; 
                break ; 
            }
        }
        int st = pivot +1 ,end = n-1 ; 
        while(st < end)
        {
            int temp = arr[st] ; 
            arr[st] = arr[end] ; 
            arr[end] = temp ; 
            st++;
            end-- ; 
        }
    }
};
int main()
{
    vector<int> vec = {1, 2, 3, 5, 4};
    for(int i : vec)
    {
        cout << i << "  "; 
    }
    cout << endl ;
    Solution s1 ; 
    s1.nextPermutation(vec) ;
    cout << endl ;
       for(int i : vec)
    {
        cout << i << "  "; 
    }
    cout << endl ;
    return 0;
}