#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1, m1, h2, m2;
    char c;

    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;

    int t1 = h1 * 60 + m1;
    int t2 = h2 * 60 + m2;

    int mid = (t1 + t2) / 2;

    int h3 = mid / 60;
    int m3 = mid % 60;

    cout << setw(2) << setfill('0') << h3 << ":"
         << setw(2) << setfill('0') << m3;

    return 0;
}