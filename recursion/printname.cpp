#include <iostream>
using namespace std;

void printName(int i, int n) {
    if (i > n) {return;}
    
    cout << "Krishna" << endl; 
    printName(i + 1, n); 
}

int main() {
    int n;
    cout << "Enter how many tim";
    cin >> n;

    printName(1, n);

    return 0;
}
