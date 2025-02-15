#include <iostream>
using namespace std;

int main() {
    char character;

    // Input the character
    cout << "Enter a character: " << endl;
    cin >> character;

    // Convert the character to uppercase by subtracting 32
    character -= 32;

    // Output the converted character
    cout << character << endl;

    return 0;
}
