#include<iostream>
using namespace std ;
int main()
{
    int n = 153 ;
    int ori = n ; 
    int check = n ;
    int i = 0 ;
    int s = 0 ;
    while(n > 0 ){
        i++;
        n = n/10;
    }

    while (ori>0){
        int digit = ori % 10 ;
        int pow =1;
        for(int j = 1; j <=i;j++ )
        {
            pow= pow * digit ;
        }
        s =s + pow ;
        ori = ori /10;
    }
    if(check == s ){
        cout<<"no is armstrong"<<endl;
    }
    else{
        cout << "no is not armstrong" <<endl;
    }


    return 0;
}