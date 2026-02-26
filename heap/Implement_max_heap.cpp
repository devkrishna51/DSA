#include <bits/stdc++.h>
using namespace std;

class Heap
{

     vector<int> arr;

public:
     void push(int x)
     {
          arr.push_back(x);
          int index = arr.size() - 1;
          while (index > 0)
          {
               int parent = (index - 1) / 2;
               if(arr[parent] < arr[index])
               {
                    swap(arr[parent]  , arr[index]) ; 
                    index = parent ; 
               }
               else{
                    break ;
               }
          }
     }
     void pop()
     {
          if(arr.size() == 0)
          {
               return ; 
          }
          swap(arr[0] , arr[arr.size()-1]) ; 
          arr.pop_back() ; 
          for(int i = 0 ; i < arr.size() ; )
          {
               int leftidx = 2*i+1 ; 
               int rightidx = 2*i+2 ; 
               int largest = i ; 
               if(leftidx < arr.size() && arr[i] < arr[leftidx])
               {
                    largest = leftidx ; 
               }
               if(rightidx < arr.size() && arr[i] < arr[rightidx])
               {
                    largest = rightidx ; 
               }
               if(largest == i)
               {
                    break ; 
               }
               swap(arr[i] ,arr[largest]) ; 
               i = largest ;
          
          }
     }
     int peek()
     {
          if(arr.size() == 0)
          {
               return -1; 
          }
          return arr[0] ; 
     }
     int size()
     {
          if(arr.size() == 0)
          {
               return -1 ; 
          }
          return arr.size() ; 
     }
  
};
int main()
{
     Heap h ; 
     h.push(10) ;
     h.push(20) ;
     h.push(30) ;
     h.push(80) ;
     h.push(50) ;
     h.push(60) ;

     cout << "The Toppest Element : " << h.peek() <<endl ;; 
     h.pop() ; 

      cout << "The Toppest Element : " << h.peek() <<endl ;; 

      cout << "the Size is : " << h.size() ; 
     return 0;
}