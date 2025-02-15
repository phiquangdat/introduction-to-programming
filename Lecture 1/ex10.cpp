#include <iostream>
using namespace std;

int main() {
    int a, sum = 0;

    // Loop through numbers from 1 to 999
    for (a = 1; a < 1000; a++) {
        // Check if the number is divisible by 3 or 5
        if (a % 3 == 0 || a % 5 == 0) {
            sum += a; // Add the number to the sum
        }
    }

    // Output the result
    cout << sum << endl;

    return 0;
}
