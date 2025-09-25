#include <iostream>
using namespace std;
struct Node
{
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
     void push(int n)
     {
          Node *newNode = new Node(n);
          if (head == nullptr)
          {
               head = tail = newNode;
          }
          else
          {
               newNode->next = head;
               head = newNode;
          }
     }
     void pop_front()
     {
          Node *temp = head;
          head = temp->next;
          delete temp;
     }
     void print()
     {
          Node *temp = head;
          while (temp != nullptr)
          {
               cout << '[' << temp->data << ']' << "   ->   ";
               temp = temp->next;
          }
          cout << " NULL " << endl;
     }
};
class Solution
{
public:
     void nodeDelete(Node *ptr)
     {
          ptr->data = ptr->next->data;
          Node *temp = ptr->next ; 
          ptr->next = ptr->next->next ; 
          delete temp ; 

     }
};
int main()
{
     list l1;
     l1.push(10);
     l1.push(20);
     l1.push(30);
     l1.push(40);
     l1.push(50);
     l1.print();
     l1.pop_front();
     l1.print();
     return 0;
}