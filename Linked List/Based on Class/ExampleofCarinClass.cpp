#include <iostream>
using namespace std;
class Car
{

public:
     string name;
     int maxSpeed;
      
     Car *next ; 

     Car (string n , int n1) 
     {
          name = n ; 
          maxSpeed = n1 ; 
     }

};
int main()
{
     Car Audi("Audi" , 300) , bmw("BMW" , 400) , jag("JAGUAR",300) , Roll("Rolls Royce" , 400) ;

     Audi.next= &bmw ; 
     bmw.next= &jag ; 
     jag.next= &Roll ;
     
     Roll.next = nullptr; 

     Car *head = &Audi ; 
     while(head != nullptr)
     {
          cout << head->name << " : " 
          << head->maxSpeed 
          <<endl ;
          
          head = head->next ; 

     }
     return 0;
}