#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    
    char c1, c2;
    int x;
    cin >> c1 >> c2 >> x;
    cout << "The ASCII code of the character `" << c1 << "`," << "`" << c2 << "`" << " respectively are " << int(c1) << " and " << int(c2) << endl;
    cout << "The distance between the two characters `" << c1 << "`," << "`" << c2 << "`" << " is " << abs(int(c1) - int(c2)) << endl;
    cout << "The uppercase version of the character `" << c1 << "`" << " is `" << char(c1 - 32) << "`" << endl;
    cout << x << " is the ASCII code of the character `" << char(x) << "`" << endl;

    return 0;
}
