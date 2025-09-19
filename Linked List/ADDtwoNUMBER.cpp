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
     Node *addTwoNumbers(Node *l1, Node *l2)
     {
          Node *dummy = new Node(0);
          Node *curr = dummy;
          while (l1 != nullptr || l2 != nullptr)
          {
               int x = (l1 ? l1->data : 0);
               int y = (l2 ? l2->data : 0);
               curr->next = new Node(x + y);
               curr = curr->next;
               if (l1)
                    l1 = l1->next;
               if (l2)
                    l2 = l2->next;
          }
          return dummy->next;
     }
     void print(Node *head)
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
int main()
{
     list l1, l2;
     l1.push(1);
     l1.push(2);
     l1.push(3);
     l1.push(4);
     l1.push(5);

     l1.print();

     l2.push(1);
     l2.push(2);
     l2.push(3);
     l2.push(4);
     l2.push(5);

     l2.print();

     Solution s1;
     Node *temp = s1.addTwoNumbers(l1.head, l2.head);
     s1.print(temp);
     return 0;
}