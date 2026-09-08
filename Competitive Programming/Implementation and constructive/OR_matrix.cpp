#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    vector<vector<int>> B(m, vector<int>(n));
    vector<vector<int>> A(m, vector<int>(n, 1));

    // Input B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> B[i][j];
        }
    }

    // B[i][j] = 0 means:
    // row i and column j of A must contain only 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (B[i][j] == 0) {

                // Make row i zero
                for (int k = 0; k < n; k++) {
                    A[i][k] = 0;
                }

                // Make column j zero
                for (int k = 0; k < m; k++) {
                    A[k][j] = 0;
                }
            }
        }
    }

    // Calculate B again from A
    vector<vector<int>> C(m, vector<int>(n, 0));

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            // OR of row i
            for (int k = 0; k < n; k++) {
                C[i][j] |= A[i][k];
            }

            // OR of column j
            for (int k = 0; k < m; k++) {
                C[i][j] |= A[k][j];
            }
        }
    }

    // Check whether C is equal to given B
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (C[i][j] != B[i][j]) {
                cout << "NO\n";
                return 0;
            }
        }
    }

    cout << "YES\n";

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] << " ";
        }
        cout << '\n';
    }

    return 0;
}

