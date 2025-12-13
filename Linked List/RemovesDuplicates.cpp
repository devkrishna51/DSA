#include <iostream>
using namespace std;
class ListNode
{
public:
     int data;
     ListNode *next;
     ListNode(int n)
     {
          data = n;
          next = nullptr;
     }
};
class Solution
{
     public : 

     ListNode* removeDuplicates(ListNode *head){
          ListNode *temp = head ; 
          while(temp != nullptr && temp->next != nullptr)
          {
               if(temp->data == temp->next->data)
               {
                    temp->next = temp->next->next ; 
               }
               else{
               temp = temp->next ; 
               }
          }
          return head ; 
     }
};

int main()
{

     ListNode *l1 = new ListNode(10);
     l1->next = new ListNode(20);
     l1->next->next = new ListNode(20);
     l1->next->next->next = new ListNode(40);

     ListNode *temp1 = l1 ; 
     while(temp1)
     {
          cout << temp1->data << " -> " ; 
          temp1 = temp1->next ; 
     }
     cout << " NULL " <<endl  <<endl ; 

     Solution s1 ; 
     ListNode* temp = s1.removeDuplicates(l1) ; 
     while(temp)
     {
          cout << temp->data << " -> " ; 
          temp = temp->next  ;
     }
     cout << "NULL " << endl ; 
     return 0 ; 
}