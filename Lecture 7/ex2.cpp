#include <iostream>
using namespace std;

void inputMatrix(double a[][100], int& m, int& n) {
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
}

bool isIdentityMatrix(double a[][100], int& m, int& n) {
    bool allOnes = true;
    for (int i = 0; i < m; i++) {
        if (a[i][i] != 1) {
            allOnes = false;
            break;
        }
    }
    return allOnes;
}

int main() {
    double a[100][100];
    int i, j, m, n;
    inputMatrix(a, m, n);
    bool checkUpper = true, checkLower = true, allZeros = true;

    if (!isIdentityMatrix(a, m, n)) {
        cout << "No";
    } else {
        int zeroCount = 0;
        for (int i = 0; i < (m - 1); i++) {
            for (int j = i + 1; j < m; j++) {
                if (a[j][i] != 0) {
                    checkLower = false;
                    break;
                }
            }
            if (!checkLower) {
                zeroCount++;
            }
            if (zeroCount == 2) {
                allZeros = false;
                break;
            }
            checkLower = true;
        }

        if (isIdentityMatrix(a, m, n) && allZeros) {
            for (int i = 1; i < m; i++) {
                for (int j = 0; j < i; j++) {
                    if (a[j][i] != 0) {
                        checkUpper = false;
                        break;
                    }
                }
            }
            if (checkUpper) {
                cout << "Yes";
            } else {
                cout << "No";
            }
        }

        if (isIdentityMatrix(a, m, n) && !allZeros) {
            cout << "No";
        }
    }

    return 0;
}
