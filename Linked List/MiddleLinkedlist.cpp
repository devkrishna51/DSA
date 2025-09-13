#include<iostream>
using namespace std ; 
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
class Solution
{
     public:
     Node *MiddleList(Node *head)
     {
          Node *slow = head ; 
          Node *fast = head ; 

          while (fast != nullptr && fast->next != nullptr)
          {
               slow = slow->next ;
               fast = fast->next->next ;
          }
          return slow ;
         
     }
   
};
void printList(Node* head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
     Node n1(10) ;
     Node n2(20) ;
     Node n3(30) ;
     Node n4(40) ;
     Node n5(50) ;
     Node n6(60) ;

     n1.next = &n2  ;
     n2.next = &n3  ;
     n3.next = &n4  ;
     n4.next = &n5  ;
     n5.next = &n6  ;
     n6.next = nullptr  ;

     Node *head  = &n1 ; 

     printList(head) ; 

     Solution s1 ; 
    Node *answer =  s1.MiddleList(head ) ; 
    cout << endl << "Middle : " ; 
    printList(answer);
     return 0 ; 
}