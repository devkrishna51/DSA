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

class LinkedList
{
public:
     Node *head;
     Node *tail;

     LinkedList()
     {
          head = nullptr;
          tail = nullptr;
     }

     void push_back(int n)
     {
          Node *newNode = new Node(n);
          if (head == nullptr)
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
          cout << "NULL" << endl;
     }
};
class Solution
{
public:
     Node *merge(Node *list1, Node *list2)
     {
          if (list1 == nullptr)
               return list2;
          if (list2 == nullptr)
               return list1;
          if (list1->data <= list2->data)
          {
               list1->next = merge(list1->next, list2);
               return list1;
          }
          else
          {
               list2->next = merge(list1, list2->next);
               return list2;
          }
     }
};
int main()
{
     LinkedList list, list1;
     list.push_back(1);
     list.push_back(3);
     list.push_back(5);

     list.print();

     list1.push_back(2);
     list1.push_back(4);
     list1.push_back(6);
     list1.print();
     Solution s1;
     Node *p = s1.merge(list.head, list1.head);
     while (p != nullptr)
     {
          cout << p->data << " -> ";
          p = p->next;
     }
     cout << " NULL " << endl;
     return 0;
}
