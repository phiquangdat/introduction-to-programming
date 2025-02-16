#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#include<stdio.h> 

#define d 2
#define max 1000      

// Function to check if the number n and n+d are twin primes
int sinhdoi(int n){
    int i;
    float can2 = sqrt(float(n + d));
    for(i = 2; i <= can2; i++)
        if(n % i == 0 || (n + d) % i == 0)
            return 0;
    return 1;
}

int main() 
{   
    int abc;
    cin >> abc;
    int n, dem = 0;
    for(n = 2; n < abc - d; n++)
        if(sinhdoi(n)){
            cout << n << ", " << n + d << endl;
            dem++;
        }
    cout << "Total: " << dem << " twin prime pairs < " << abc << endl;
    system("pause");
    return 0;
}
