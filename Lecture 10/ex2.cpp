#include <iostream>
using namespace std;

struct Term {
    double coefficient;
    int exponent;
};

struct Polynomial {
    Term* terms = new Term[100];
    int numTerms;
    Polynomial() {
        for (int i = 0; i < 100; i++) {
            this->terms[i].coefficient = this->terms[i].exponent = 0;
        }
        numTerms = 0;
    }
};

Polynomial* input() {
    Polynomial* a;
    a = new Polynomial[100];
    cin >> a->numTerms;
    for (int i = 0; i < a->numTerms; i++) {
        cin >> (a[i].terms->coefficient);
        cin >> (a[i].terms->exponent);
    }
    return a;
}

void output(Polynomial& b) {
    for (int i = 0; i < b.numTerms; i++) {
        cout << b.terms->coefficient << b.terms->exponent;
    }
}

int main() {
    Polynomial *A, *B;
    A = input();
    B = input();
    cout << "Polynomial A: "; output(*A);
    cout << "\nPolynomial B: "; output(*B);
    //cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}

// Code snippet for generating output format
for(int i = 0; i < b.numTerms; i++) {
    if(i != 0 && (*(temp + i)).coefficient > 0) {
        cout << "+";
    }
    if((*(temp + i)).coefficient == 1) {
        if((*(temp + i)).exponent == 1) {
            cout << "x";
        } else if((*(temp + i)).exponent == 0) {
            cout << (*(temp + i)).coefficient;
        } else {
            cout << "x^" << (*(temp + i)).exponent;
        }
    } else if((*(temp + i)).coefficient == -1) {
        if((*(temp + i)).exponent == 1) {
            cout << "-x";
        } else if((*(temp + i)).exponent == 0) {
            cout << (*(temp + i)).coefficient;
        } else {
            cout << "-x^" << (*(temp + i)).exponent;
        }
    } else if((*(temp + i)).coefficient == 0) {
        continue;
    } else {
        if((*(temp + i)).exponent == 1) {
            cout << (*(temp + i)).coefficient << "x";
        } else if((*(temp + i)).exponent == 0) {
            cout << (*(temp + i)).coefficient;
        } else {
            cout << (*(temp + i)).coefficient << "x^" << (*(temp + i)).exponent;
        }
    }
}
