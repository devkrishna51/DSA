#include <bits/stdc++.h>
using namespace std;

class maxHeap {
  private:
    // Initialize your data members
    vector<int>arr; 
  public:

    void push(int x) {
        // Insert x into the heap
        arr.push_back(x) ; 
        int current = arr.size()-1 ; 
        
        while(current > 0){
            int parent = (current-1)/2 ; 
            if(arr[parent] < arr[current]){
                swap(arr[parent] , arr[current]) ; 
                current = parent ; 
            }
            else {
                break ; 
            }
        }
    }

    void pop() {
        // Remove the top (maximum) element
        if(arr.size() == 0){
            return  ; 
        }
        swap(arr[0] , arr[arr.size() -1]) ; 
        arr.pop_back() ; 
        
        for(int i = 0 ; i < arr.size() ;){
            
            int left = 2*i+1 ; 
            int right = 2*i+2 ;
            int largest = i ; 
            if(left < arr.size() && arr[largest] < arr[left]){
                largest = left ; 
                
            }
            if(right < arr.size() && arr[largest] < arr[right]){
                largest = right ; 
            }
            if(arr[largest] == arr[i]) {
                
                break ; 
            }
            swap(arr[largest] , arr[i]) ; 
            i = largest ; 
        }
    }

    int peek() {
        // Return the top element or -1 if empty
        if(arr.size() == 0){
            return -1 ; 
        }
        return arr[0] ; 
    }

    int size() {
        // Return the number of elements in the heap
        return arr.size() ; 
    }
};
int main()
{
     maxHeap h ; 
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