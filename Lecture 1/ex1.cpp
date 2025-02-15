#include <stdio.h>
#include <iostream>
using namespace std;


int main(){
    //Bai1
    int number;
    printf("\nHay nhap so xe: ");
    scanf("%d",&number);
    int a,b,c,d,e,Tongsonut;
    a = number %10;
    number /= 10;
    b = number%10;
    number /= 10;
    c = number %10;
    number /= 10;
    d = number%10;
    number /= 10;
    e = number;
    Tongsonut=(a+b+c+d+e)%10;
    cout<<Tongsonut<<endl;



    return 0;
}