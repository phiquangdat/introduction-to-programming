#include <iostream>
using namespace std;

// Function to input array elements
void inputArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Enter element " << i + 1 << endl;
        cin >> a[i];
    }
}

// Function to output array elements
void outputArray(int a[], int n) {
    for(int i = 0; i < n; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

// Function to search for an element (returns 0 if not found)
int search1(int a[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(a[i] == x) return i;
    }
    return 0;
}

// Function to search for an element (returns -1 if not found)
int search2(int a[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(a[i] == x) return i;
    }
    return -1;
}

// Function to search for an element and print its index
void search3(int a[], int n, int x) {
    for(int i = 0; i < n; i++) {
        if(a[i] == x) cout << i << "\t" << endl;
        else cout << "Not found" << endl;
    }
}

int main() {
    int a[100], n, x;
    cout << "Enter n" << endl;
    cin >> n;
    cout << "Enter x" << endl;
    cin >> x;
    inputArray(a, n);
    outputArray(a, n);
    search1(a, n, x);
    if(search2(a, n, x) != -1) {
        cout << "\nFound" << endl;
    } else {
        cout << "\nNot Found" << endl;
    }
    search3(a, n, x);

    return 0;
}
