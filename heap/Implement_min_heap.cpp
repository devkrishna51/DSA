#include <bits/stdc++.h>
using namespace std;
class minHeap
{
private:
     vector<int> arr;

public:
     void push(int x)
     {

          arr.push_back(x);
          int current = arr.size() - 1;
          while (current > 0)
          {

               int parent = (current - 1) / 2;
               if (arr[parent] > arr[current])
               {
                    swap(arr[parent], arr[current]);
                    current = parent;
               }
               else
               {
                    break;
               }
          }
     }

     void pop()
     {

          if (arr.size() == 0)
          {
               return;
          }

          swap(arr[0], arr[arr.size() - 1]);
          arr.pop_back();
          for (int i = 0; i < arr.size();)
          {

               int left = 2 * i + 1;
               int right = 2 * i + 2;

               int largest = i;
               if (left < arr.size() && arr[largest] > arr[left])
               {
                    largest = left;
               }
               if (right < arr.size() && arr[largest] > arr[right])
               {
                    largest = right;
               }
               if (arr[largest] == arr[i])
               {
                    break;
               }
               swap(arr[i], arr[largest]);
               i = largest;
          }
     }

     int peek()
     {
          // Return the top element or -1 if empty
          if (arr.size() == 0)
          {
               return -1;
          }
          return arr[0];
     }

     int size()
     {
          // Return the number of elements in the heap
          return arr.size();
     }
};
int main()
{
     minHeap s1;

     s1.push(20);
     s1.push(5);
     s1.push(17);
     s1.push(3);
     s1.push(25);
     s1.push(1);
     s1.push(12);
     s1.push(8);

     cout << "Top element: " << s1.peek() << endl;

     s1.pop();
     cout << "Top element after first pop: " << s1.peek() << endl;

     s1.pop();
     cout << "Top element after second pop: " << s1.peek() << endl;

     cout << "Current size of the heap: " << s1.size() << endl;
     return 0;
}