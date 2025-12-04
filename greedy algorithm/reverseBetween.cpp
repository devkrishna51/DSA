#include <iostream>
#include <vector>
using namespace std;
class Node
{
public:
     int data;
     Node *next;
     Node(int n)
     {
          data = n;
          next = nullptr;
     }
};
class list
{

public:
     Node *head;
     Node *tail;
     list()
     {
          head = nullptr;
          tail = nullptr;
     }
     void push_back(int n)
     {
          Node *newNode = new Node(n);
          if (head == nullptr && tail == nullptr)

          {
               head = tail = newNode;
          }
          else
          {
               tail->next = newNode;
               tail = newNode;
          }
     }
     void print()
     {
          Node *temp = head;
          while (temp)
          {
               cout << temp->data << " -> ";
               temp = temp->next;
          }
          cout << " NULL " << endl;
     }
};
class Solution
{
public:
     Node *reverseBetween(Node *head, int left, int right)
     {
          if (left == right)
          {
               return head ; 
          }
          vector<int> arr;
          Node *temp = head;
          while (temp)
          {
               arr.push_back(temp->data);
               temp = temp->next;
          }
          int start = left - 1;
          int end = right - 1;
          while (start < end)
          {
               int temp = arr[start];
               arr[start] = arr[end];
               arr[end] = temp;
               start++;
               end--;
          }
          temp = head;
          int i = 0;
          while (temp)
          {
               temp->data = arr[i];
               i++;
               temp = temp->next;
          }
          return head;
     }
};
int main()
{
     list l1;
     l1.push_back(1);
     l1.push_back(2);
     l1.push_back(3);
     l1.push_back(4);
     l1.push_back(5);
     l1.print();

     Solution s1;
     Node *result = s1.reverseBetween(l1.head, 2, 3);
     while(result)
     {
          cout << result->data << " -> " ; 
          result = result->next ; 
     }
     cout << " NULL " <<endl  ;
     return 0;
}