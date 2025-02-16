#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    double a, b, c;
    double delta;
    cin >> a >> b >> c;
    
    if(a != 0){
        delta = (b * b) - (4 * a * c);
        if(delta < 0){
            cout << "The equation has no real roots." << endl;
        } else if(delta == 0){
            if(b == 0 && c == 0){
                cout << "The equation has no real roots." << endl;
            }
            else{
                cout << "The equation has a double root: x1 = x2 = " << (-b) / (2 * a) << endl;
            }
        } else if(delta > 0){
            cout << "The equation has two distinct roots: \n" 
                 << "x1 = " << ((-b + sqrt(delta)) / (2 * a)) << "\n"
                 << "x2 = " << ((-b - sqrt(delta)) / (2 * a)) << endl;
        }
    } else {
        cout << "The equation has no real roots." << endl;
    }

    return 0;
}
