#include <iostream>
#include <math.h>
using namespace std;
int fibonacci(int n) {
if (n == 2 || n == 1) return 1;
return fibonacci(n - 1) + fibonacci(n - 2); 
}
int tongcacchuso(int k){
if(k==0) return 0;
return tongcacchuso(k/10)+(k%10);
}    
int demsoluongchuso(int n){
    if(n==0) return 0;
    return demsoluongchuso(n/10)+1;
}
int padovan(int n){
    if(x==0 || x==1 || x==2) return 1;
    return padovan(x-2)+padovan(x-3);
}
int reverse(int n){
    if(n==0) return 0;
    cout<<n%10;
    reverse(n/10);
}
int giaithua(int n){
    if(x==1) return 1;
    return giaithua(x-1)*x;
}
int tonggiaithua(int n){
    if(n==1) return 1;
    return tonggiaithua(n-1)+giaithua(n-1)*n;
}
int luythua(float x ,int n){
if(n==0 ) return 1;
if(n<0) return luythua(x,n+1) * 1/x;
return luythua(x,n-1)*x;
}
int main(){
    int tong=0,i=10;
    cout<<fibonacci(10)<<endl;
    cout<<demsoluongchuso(10)<<endl;
    cout<<tongcacchuso(123)<<endl;
    return 0;
}