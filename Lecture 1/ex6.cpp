#include <iostream>
using namespace std;

int main() {
    int sumOfDigits, number;
    int a, b, c, d;

    // Input the number
    cout << "Enter the number: ";
    cin >> number;

    // Extract and sum the digits of the number
    d = number % 10;
    number /= 10;
    c = number % 10;
    number /= 10;
    b = number % 10;
    number /= 10;
    a = number % 10;

    sumOfDigits = a + b + c + d;
    sumOfDigits %= 10; // Get the last digit of the sum

    // Output the result
    cout << "Sum of digits: " << sumOfDigits << endl;

    return 0;
}
