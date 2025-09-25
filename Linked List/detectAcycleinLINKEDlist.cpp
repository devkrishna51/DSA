#include <iostream>
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
          while (temp != nullptr)
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
     bool detectACycle(Node *head)
     {
          Node *slow = head;
          Node *fast = head;
          while (fast != nullptr && fast->next != nullptr)
          {
               slow = slow->next;
               fast = fast->next->next;
               if (slow == fast)
               {
                    return true;
               }
          }
          return false;
     }
};
int main()
{
     list l1;
     l1.push_back(10);
     l1.push_back(20);
     l1.push_back(30);
     l1.push_back(40);
     l1.push_back(50);
     l1.print();

     Solution s1;
     bool check = s1.detectACycle(l1.head);
     if (check == true)
     {
          cout << " Linked List have a cycle " << endl;
     }
     else
     {
          cout << "Linked List does not have a cycle " << endl;
     }
     return 0;
}