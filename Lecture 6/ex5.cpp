#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
int check(int n) {
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++) {
        if(n % i == 0) count++;
    }
    if(count == 0) return 1;
    return 0;
}

// Function to input an array of prime numbers
void inputPrimeArray(int a[], int &n) {
    cin >> n;
    int count = 0, i = 2;
    for(int j = 0; j < n; j++) {
        while(count < n) {
            if(check(i)) {
                count++;
                cout << i << " ";
            }
            i++;
        }
    }
}

int main() {
    int a[100];
    int count = 0, i = 2, j = 0, n = 10;
    while(j < n) {
        while(count < n) {
            if(check(i)) {
                count++;
                a[j] = i;
                j++;
            }
            i++;
        }
    }
    for(int z = 0; z < n; z++) {
        cout << a[z] << " ";
    }

    return 0;
}
