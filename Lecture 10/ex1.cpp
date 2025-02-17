#include <iostream>
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

Polynomial& addPolynomials(Polynomial *a, Polynomial *b) {
    Polynomial* c;
    int max = (a->numTerms) > (b->numTerms) ? a->numTerms : b->numTerms;
    c = new Polynomial[max + 1];
    int i = 0, j = 0, k = 0, count = 0;
    c->numTerms = 100;
    while (i < a->numTerms && j < b->numTerms) {
        if (a[i].exponent == b[j].exponent) {
            c[k].coefficient = a[i].coefficient + b[j].coefficient;
            c[k].exponent = a[i].exponent;
            i++;
            j++;
            k++;
            count++;
        } else if (a[i].exponent > b[j].exponent) {
            c[k].coefficient = a[i].coefficient;
            c[k].exponent = a[i].exponent;
            i++;
            k++;
            count++;
        } else {
            c[k].coefficient = b[j].coefficient;
            c[k].exponent = b[j].exponent;
            j++;
            k++;
            count++;
        }
    }
    while (i < a->numTerms) {
        c[k].exponent = a[i].exponent;
        c[k].coefficient = a[i].coefficient;
        i++;
        k++;
        count++;
    }
    while (j < b->numTerms) {
        c[k].exponent = b[j].exponent;
        c[k].coefficient = b[j].coefficient;
        j++;
        k++;
        count++;
    }
    c->numTerms = count;
    return *c;
}

int main() {
    Polynomial *A, *B;
    A = input();
    B = input();
    cout << "Polynomial A: "; output(*A);
    cout << "\nPolynomial B: "; output(*B);
    cout << "\nA + B = "; output(addPolynomials(A, B));
    return 0;
}
