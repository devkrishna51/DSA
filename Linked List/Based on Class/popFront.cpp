#include <iostream>
using namespace std;
class Node
{
public:
     int data;
     Node *next = nullptr;
     Node(int n)
     {
          data = n;
          next = nullptr;
     }
};
class List
{
     Node *head;
     Node *tail;

public:
     List()
     {
          head = nullptr;
          tail = nullptr;
     }
     void push_front(int n)
     {
          Node *newNode = new Node(n);
          if(head == nullptr)
          {
               head = tail = newNode ; 
          }
          else{
               newNode->next = head ; 
               head = newNode ; 
          }

     }
     void print()
     {
          Node *temp = head;  
          while(temp != nullptr )
          {
               cout << "[" << temp->data << "]" << " -> " ; 
               temp = temp->next ;
          }
          cout << "     NULL " << endl; 
     }
     void pop_front()
     {
        Node *temp = head ; 
        head  = temp->next ; 
        temp = nullptr ; 
        delete temp  ;
        
     }
};
int main()
{
     List l1 ; 
     l1.push_front(10) ; 
     l1.push_front(20) ; 
     l1.push_front(30) ; 
     l1.push_front(40) ;
     
     l1.print() ;

     l1.pop_front() ; 
     l1.print();
     return 0;
}