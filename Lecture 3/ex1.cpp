#include <iostream>
using namespace std;

int main(){
    // Example 1: Calculate the sum of numbers from 1 to n
    int n;
    do {
        cin >> n;
    } while(n < 0);
    
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += i;
    }
    cout << sum << endl;

    // Example 2: Print all divisors of n
    for(int i = 0; i <= n; i++){
        if(n % i == 0){
            cout << i << endl;
        }
    }

    // Example 3: Count the number of digits in n
    int count = 0, a;
    a = n;
    while(n >= 10){
        n /= 10;
        count++;
    }
    cout << count + 1 << endl;
    n = a;

    // Example 4: Check if n is a prime number
    int count2 = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count2++;
        }
        if(count2 > 2){
            break;
        }
    }
    if(count2 == 2){
        cout << "Prime number" << endl;
    } else {
        cout << "Not a prime number" << endl;
    }

    // Example 5: Print odd numbers from 1 to 50, skipping 3, 9, and 31
    for(int i = 1; i <= 50; i++){
        if(i == 3 || i == 9 || i == 31){
            continue;
        }
        if(i % 2 != 0){
            cout << i << endl;
        }
    }

    return 0;
}
