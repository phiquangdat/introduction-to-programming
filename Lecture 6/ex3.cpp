#include <iostream>
using namespace std;

// Function for task 1
void input1(int a[], int n) {
    for(int i = 0; i < n; i++) {
        do {
            cin >> a[i];
        } while(a[i] <= a[i - 1] && i > 0);
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

// Function for task 2
void input2(int a[], int n) {
    for(int i = 0; i < n; i++) {
        do {
            cin >> a[i];
        } while(a[i] <= 99);
    } 
}

// Function for task 3
void input3(int a[], int n) {
    for(int i = 0; i < n; i++) {
        a[i] = rand() % 900 + 100;
    } 
}

// Function to check for duplicates
int checkDuplicate(int n, int a[], int k) {
    for(int i = 0; i < n; i++) {
        if(a[i] == k) return 1;
    }
    return 0;
}

// Function for task 4
void input4(int &n, int a[]) {
    int temp;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        if(checkDuplicate(n, a, temp) == 1) {
            cout << "Please re-enter" << endl;
            i--;
        } else {
            a[i] = temp;
        }
    }
}

int main() {
    int a[100], n;
    cout << "Enter n: ";
    cin >> n;
    input1(a, n);
    input2(a, n);
    input3(a, n);
    return 0;
}
