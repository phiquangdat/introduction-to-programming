#include <iostream>
using namespace std;

void inputArray(int a[100][100], int& n, int& m) {
    cout << "Enter number of rows: ";
    cin >> n;
    cout << "Enter number of columns: ";
    cin >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "Enter element a[" << i << "][" << j << "]" << endl;
            cin >> a[i][j];
        }
    }
}

void outputArray(int a[100][100], int& n, int& m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
}

void search(int a[100][100], int& n, int& m, int x) {
    int count = 0;
    cout << "Enter x: ";
    cin >> x;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == x) {
                cout << "a[" << i << "][" << j << "]" << endl;
                count++;
            }
        }
    }
    if (count == 0) {
        cout << "Not found" << endl;
    }
}

void mainDiagonal(int a[100][100], int& n, int& m) {
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        cout << a[i][i] << "\t";
        sum += a[i][i];
        count++;
    }
    cout << "\n" << count << endl;
    cout << sum << endl;
}

void secondaryDiagonal(int a[100][100], int& n, int& m) {
    int count = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i + j == n - 1) {
                cout << a[i][j] << "\t";
                sum += a[i][j];
                count++;
            }
        }
    }
    cout << "\n" << count << endl;
    cout << sum << endl;
}

int main() {
    int a[100][100], n, m, x, fibonacci, b = 1, c = 1, d;
    for (int i = 1; i <= 3; i++) {
        fibonacci = b;
        d = c + b;
        b = c;
        c = d;
    }
    cout << fibonacci << endl;
    return 0;
}
