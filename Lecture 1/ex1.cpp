#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    //Bai1
    int number;
    printf("\nEnter number of cars: ");
    scanf("%d",&number);
    int a , b, c, d, e, sum;
    a = number %10;
    number /= 10;
    b = number%10;
    number /= 10;
    c = number %10;
    number /= 10;
    d = number%10;
    number /= 10;
    e = number;
    sum=(a+b+c+d+e)%10;
    cout<<sum<<endl;



    return 0;
}