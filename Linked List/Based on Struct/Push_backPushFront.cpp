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
Node *head = nullptr;
Node *tail = nullptr;
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
     Node *newNode = new Node (n ); 
     if(head == nullptr && tail == nullptr)
     {
          head= tail = newNode ;
     }
     else{
          tail->next = newNode ; 
          tail = newNode ; 
     }
}
void print()
{    
     Node *temp = head ; 
     while(temp != nullptr)
     {
          cout << "[" << temp->data << "]" << " -> " ; 
          temp = temp->next ; 
     }
     cout << "NULL" << endl ; 
}
int main()
{
     push_back(10) ; 
     push_back(20) ; 
     push_front(9 ); 
     push_front(8) ; 
     print() ;
     return 0;
}