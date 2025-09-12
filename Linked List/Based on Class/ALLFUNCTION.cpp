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
     Node *head;
     Node *tail;

public:
     list()
     {
          head = nullptr;
          tail = nullptr;
     }
     void push_front(int n)
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
     void push_back(int n)
     {
          Node *newNode = new Node(n);
          if (tail == nullptr && head == nullptr)
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
          if (head == nullptr && tail == nullptr)
          {
               cout << "\nThe list is Empty " << endl;
               return;
          }
          Node *temp = head;
          while (temp != nullptr)

          {
               cout << "[" << temp->data << "]" << "  ->  ";
               temp = temp->next;
          }
          cout << " NULL " << endl;
     }
     void pop_back()
     {

          if (head == nullptr)
          {
               cout << "The LIST is Empty";
               return;
          }

          if (head == tail)
          {
               cout << "single Node has been deleted ";
               delete head;
               head = tail = nullptr;
               return;
          }
          Node *temp = head;
          while (temp->next != tail)
          {
               temp = temp->next;
          }
          temp->next = nullptr;
          delete tail;
          tail = temp;
     }
     void pop_front()
     {
          if (head == nullptr)
          {
               cout << "\n\nThe List is Empty\n\n";
               
               return;
             
          }

          Node *temp = head;
          head = head->next;
          delete temp;

          if (head == nullptr) 
          {
               cout << "\n\nLIst has been empty\n\n";
                  tail = nullptr;
          }
              
     }
     int count()
     {
          int c = 0 ; 
          Node *temp = head ; 
          while(temp != nullptr) 
          {
               c++ ; 
               temp = temp->next ; 
          }
          return c ; 
     }
};
int main()
{
     list l1;
     l1.push_front(6);
     l1.push_front(7);
     l1.push_front(8);
     l1.push_front(9);
     l1.push_back(10);
     l1.push_back(11);
     l1.push_back(12);
     l1.push_back(13);

     l1.print();
     cout <<"\nHow many members : " <<l1.count()  <<endl;; 
     l1.pop_front();
     l1.pop_front();
     l1.pop_front();
     l1.pop_front();
     l1.pop_front();
      cout <<"\nHow many members : " <<l1.count()  <<endl;; 
     l1.print();
     return 0;
}