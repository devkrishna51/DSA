#include <iostream>
using namespace std;
int lenght(string name, int len = 0)
{
    if (name[len] == '\0')
    {
        return len;
    }
    return lenght(name, len + 1)   ;
}
int plaindrome(string name, int start, int end)
{
    if (start >= end)
    {
        return 1;
    }
    if (name[start] != name[end])
    {
        return 0;
    }
    return plaindrome(name,start+1, end-1);
}
int main()
{
    string name = "krishna";
    int count = lenght(name);
    int result = plaindrome(name, 0,count - 1);
    if (result == 1)
    {
        cout << "\n\nstring is palindrome\n\n" << endl;
    }
    else
    {
        cout << "\n\nstring is not palindrome\n\n" << endl;
    }
    return 0;
}