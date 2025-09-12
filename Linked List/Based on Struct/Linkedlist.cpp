#include <iostream>
using namespace std;
struct Node
{
    int data;
    string name;
    Node *next = nullptr;
    Node(int n, string str)
    {
        data = n;
        name = str;
        next = nullptr;
    }
};
Node *head = nullptr;
Node *tail = nullptr;
void push_front(int n, string str)
{
    Node *newNode = new Node(n, str);
    if(head == nullptr)
    {
         head = tail = newNode ;
    }
    else{
        newNode->next = head; 
        head= newNode ; 
    }
}
void push_back(int n , string str)
{
    Node * newNode = new Node(n,str) ; 
    if(tail == nullptr)
    {
      head = tail = newNode; 
    }else{
        tail->next = newNode ; 
        tail = newNode ; 
    }

}
void print()
{
   Node * temp = head ; 
    while(temp != nullptr)
    {
        cout << "[" << temp->data << "  , " << temp->name << "]" << "  ->  "  ; 
        temp = temp->next ; 
    }
    cout << "NULL" <<endl ;
}

int main()
{
    push_back(1,"krishna");
    push_back(2,"rahul");
    push_back(3 , "Rishu");
    push_back(4 , "joker");
    

    push_front(0,"lolu");
    // push_front(4 , "joker");

    print();
    return 0;
}