#include <iostream>
#include <math.h>
using namespace std;

int fibonacci(int n) {
    if (n == 2 || n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); 
}

int sumOfDigits(int k) {
    if (k == 0) return 0;
    return sumOfDigits(k / 10) + (k % 10);
}

int countDigits(int n) {
    if (n == 0) return 0;
    return countDigits(n / 10) + 1;
}

int padovan(int n) {
    if (n == 0 || n == 1 || n == 2) return 1;
    return padovan(n - 2) + padovan(n - 3);
}

void reverse(int n) {
    if (n == 0) return;
    cout << n % 10;
    reverse(n / 10);
}

int factorial(int n) {
    if (n == 1) return 1;
    return factorial(n - 1) * n;
}

int sumOfFactorials(int n) {
    if (n == 1) return 1;
    return sumOfFactorials(n - 1) + factorial(n);
}

float power(float x, int n) {
    if (n == 0) return 1;
    if (n < 0) return power(x, n + 1) * 1 / x;
    return power(x, n - 1) * x;
}

int main() {
    cout << fibonacci(10) << endl;
    cout << countDigits(10) << endl;
    cout << sumOfDigits(123) << endl;
    return 0;
}
