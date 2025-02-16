#include <iostream>
#include <cmath>
using namespace std;
#define MAX 100

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
    int count = 0, i = 2, j = 0;
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
}

// Function to count the elements in the array that contain the digit y
int countElementsWithDigit(int a[], int n, int y) {
    int count = 0, temp = 0;
    for(int i = 0; i < n; i++) {
        do {
            temp = a[i] % 10;
            if(temp == y) {
                count++;
                break;
            }
            a[i] /= 10;
        } while(a[i] > 0);
    }
    return count;
}

int main() {
    int a[MAX], n, y;
    cin >> y;
    inputPrimeArray(a, n);
    cout << countElementsWithDigit(a, n, y) << endl;
    return 0;
}
