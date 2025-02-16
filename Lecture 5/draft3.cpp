#include <iomanip>
#include <iostream>
using namespace std;
double pow(double a, int x){
    double tmp=a;
    for(int i=1;i<x;i++)
        tmp *= a;
    return tmp;
}
double fibonacci(double n){
    if(n==0) return 0;
    if(n==1) return 1;
    return n*fibonacci(n-1);
}
int main(){
    double x;
    cin>>x;
    double n=1;
    double xk=x;
    double xn=x;
    while(xk>0.00001){
        xk=pow(x,2*n+1)/fibonacci(2*n+1);
        xn += pow(-1,n) * xk;
        n++;
    }
    cout<<fixed<<setprecision(4)<<xn;
}