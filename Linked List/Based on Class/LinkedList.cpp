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
     }
};
int main()
{
     Node n1(10);

     Node n2(20);

     Node n3(30);

     Node n4(40);
     n4.next = nullptr;

     n1.next = &n2;
     n2.next = &n3;
     n3.next = &n4;

     Node *head = &n1 ; 

     while(head != nullptr)
     {
          cout << head->data << endl ; 
          head=  head ->next ;
     }
     return 0;
}