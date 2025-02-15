#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#include<stdio.h> 

int main(){
    double a,b,c,delta;
    cin>>a>>b>>c;
    delta = (b*b)-(4*a*c);
    if(a==0){
        if(b==0){
            if(c==0){
                cout<<"INF";
            }else {
                cout<<"IE";
            }
        }else{
            cout<<-c/b;
        }
    }else{
        if(delta>=0){
            float x1=0,x2=0;
            x1=(abs(x1)<0.001)?0:x1;
            x2=(abs(x2)<0.001)?0:x2;
            x1= -b + sqrt(delta)/2*a;
            x2= -b + sqrt(delta)/2*a;
            if(x1>x2){
                cout<<x1<<" "<<x2;
            }
            else{
                cout<<x2<<" "<<x2;
            }}else{
                cout<<"IE";
            }
        
        
    }








    return 0;
}