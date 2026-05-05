#include<bits/stdc++.h>
using namespace std ; 
class ListNode
{

     public :  
          int val ; 
          ListNode *next ; 
          ListNode(int n)
          {
               val = n ; 
               next = nullptr ; 
          }
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL)
        {
            return head ; 
        }
        vector<int> arr ; 
        ListNode *temp = head ; 
        while(temp)
        {
            arr.push_back(temp->val) ; 
            temp = temp->next ; 
        }
        
         k = k % arr.size() ;

        for(int i = 0 ; i < k   ; i++)
        {
            int last = arr[arr.size()-1] ; 
            for(int j = arr.size()-1 ; j > 0  ; j--)
            {
                arr[j] = arr[j-1] ; 
            }
            arr[0] = last ; 
        }

        ListNode *head2 = new ListNode(arr[0]) ; 
        ListNode *curr = head2 ; 
        for(int i = 1 ; i < arr.size() ; i++)
        {
             curr->next = new ListNode(arr[i]) ; 
             curr = curr->next ; 
        }
        return head2 ; 
    }
};
void print(ListNode *head)
{
     ListNode *temp = head ; 
     while(temp)
     {
          cout <<"[" <<temp->val << "] -> " ; 
          temp = temp->next ; 
     }
     cout << " NULL " << endl ; 
}

int main()
{
     ListNode * head = new ListNode(1) ; 
     head->next = new ListNode(2) ; 
     head->next->next = new ListNode(3) ; 
     head->next->next->next = new ListNode(4) ;
     head->next->next->next->next = new ListNode(5)  ;

     print(head) ; 
     
     Solution s1 ; 
     ListNode *rotated = s1.rotateRight(head ,2) ; 
     print(rotated) ; 
     return 0 ; 
}