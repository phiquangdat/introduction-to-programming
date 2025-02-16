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

// Function to check if all elements are even, odd, or mixed
void checkNumbers(int a[], int n) {
    int evenCount = 0, oddCount = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2 == 0) evenCount++;
        else oddCount++;
    }
    if(evenCount == n) 
        cout << "\nAll even numbers" << endl;
    else if(oddCount == n) 
        cout << "\nAll odd numbers" << endl;
    else 
        cout << "\nMixed numbers" << endl;
}

int main() {
    int a[100], n;
    cout << "Enter n" << endl;
    cin >> n;
    inputArray(a, n);
    outputArray(a, n);
    checkNumbers(a, n);
    return 0;
}
