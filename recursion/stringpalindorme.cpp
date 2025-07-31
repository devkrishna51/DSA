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
int plaindrome(string name, int count, int i = 0)
{
    if (i >= count)
    {
        return 1;
    }
    if (name[i] != name[count])
    {
        return 0;
    }
    return plaindrome(name, count - 1, i + 1);
}
int main()
{
    string name = "madam";
    int count = lenght(name);
    int result = plaindrome(name, count - 1);
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