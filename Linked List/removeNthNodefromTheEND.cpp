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
               head = tail = newNode;;
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
               cout << temp->data << "  ->  ";
               temp = temp->next;
          }
          cout << "NULL" << endl;
     }
};
class Solution
{
public:
     Node *removeNthFromEnd(Node *head, int n)
     {
          int count = 0;
          Node *temp = head;
          while (head != nullptr)
          {
               count++;
               head = head->next;
          }

          int target = count - n;
          head = temp;
          if (target == 0)
          {
               return temp->next;
          }
          for (int i = 0; i < target - 1; i++)
          {
               temp = temp->next;
          }

          Node *del = temp->next;
          temp->next = temp->next->next;
          delete del;
          return head;
     }
     void printlist(Node *head)
     {
          Node *temp = head ;
          while(temp != nullptr)
          {
               cout << temp ->data << " ->  "; 
               temp = temp ->next ;   
          } 
          cout << "NULL " <<endl ; 


     }
};
int main()
{

     list l1 ; 
     l1.push(10) ; 
     l1.push(20) ; 
     l1.push(30) ; 
     l1.push(40) ; 
     l1.push(50) ;
     l1.print() ;
     Solution s1 ;  
     s1.removeNthFromEnd(l1.head , 3) ; 
     s1.printlist(l1.head);
     return 0;
}