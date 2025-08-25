#include <iostream>
using namespace std;
class Solution
{
public:
    double pownumber(double n, int pow)
    {
        if (pow == 0)
            return 1;
        if (pow < 0)
        {
            n = 1 / n;
            pow = pow * -1;
        }
        double ans = 1;
        while (pow > 0)
        {
            if (pow % 2 == 1)
            {
                ans = ans * n;
            }
            n = n * n;
            pow = pow / 2;
        }
        return ans;
    }
};
int main()
{
    int n, pow;
    cout << "Enter a number : ";
    cin >> n;
    cout << "\nEnter the power : ";
    cin >> pow;
    cout << endl;
    Solution s1;
    double result = s1.pownumber(n, pow);
    cout << "The result is : " << result << endl;
    return 0;
}
