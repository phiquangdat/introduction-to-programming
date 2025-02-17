#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Polynomial {
    int exponent;
    double coefficient;
    int numTerms;
};

Polynomial* input() {
    Polynomial* a;
    a = new Polynomial[100];
    cin >> a->numTerms;
    for (int i = 0; i < a->numTerms; i++) {
        cin >> (a[i].coefficient);
        cin >> (a[i].exponent);
    }
    return a;
}

void output(Polynomial& b) {
    Polynomial *temp;
    temp = &b;
    int flag = 0;
    int max = 0;
    for (int i = 0; i < b.numTerms; i++) {
        if ((*(temp + i)).coefficient == 0) {
            flag++;
        }
    }
    if (flag == b.numTerms) {
        cout << "0";
    }
    for (int i = 0; i < b.numTerms; i++) {
        if (((*(temp + i)).exponent) >= max && ((*(temp + i)).coefficient) != 0) {
            max = ((*(temp + i)).exponent);
        }
    }
    for (int i = 0; i < b.numTerms; i++) {
        if (i != 0 && (*(temp + i)).coefficient > 0 && ((*(temp + i)).exponent) != max) {
            cout << "+";
        }
        if ((*(temp + i)).coefficient == 1) {
            if ((*(temp + i)).exponent == 1) {
                cout << "x";
            } else if ((*(temp + i)).exponent == 0) {
                cout << (*(temp + i)).coefficient;
            } else {
                cout << "x^" << (*(temp + i)).exponent;
            }
        } else if ((*(temp + i)).coefficient == -1) {
            if ((*(temp + i)).exponent == 1) {
                cout << "-x";
            } else if ((*(temp + i)).exponent == 0) {
                cout << (*(temp + i)).coefficient;
            } else {
                cout << "-x^" << (*(temp + i)).exponent;
            }
        } else if ((*(temp + i)).coefficient == 0) {
            continue;
        } else {
            if ((*(temp + i)).exponent == 1) {
                cout << (*(temp + i)).coefficient << "x";
            } else if ((*(temp + i)).exponent == 0) {
                cout << (*(temp + i)).coefficient;
            } else {
                cout << (*(temp + i)).coefficient << "x^" << (*(temp + i)).exponent;
            }
        }
    }
}

double evaluatePolynomial(Polynomial& B, double x) {
    int i;
    double result = 0;
    Polynomial* c;
    c = &B;
    int n = B.numTerms;
    for (i = 0; i <= n; i++) {
        result += ((*(c + i)).coefficient) * pow(x, (*(c + i)).exponent);
    }
    return result;
}

int main() {
    Polynomial *B; B = input();
    cout << "The entered polynomial is: "; output(*B);
    double x; cin >> x;
    cout << "\nFor x = " << x << ", the value of the polynomial is: "
         << setprecision(2) << fixed << evaluatePolynomial(*B, x);
    return 0;
}
