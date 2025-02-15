#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter 3 numbers: " << endl;
    cin >> a >> b >> c;

    // Determine the largest number
    if (a > b && a > c) {
        cout << a << endl;
    } else if (b > a && b > c) {
        cout << b << endl;
    } else {
        cout << c << endl;
    }

    return 0;
}
