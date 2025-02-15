#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;



int main(){
    double a,b,c;
    double delta;
    cin>>a>>b>>c;
    
    if(a!=0 ){
        delta = (b*b)-(4*a*c);
        if(delta<0){
            cout<<"PTVN"<<endl;
        }else if(delta ==0){
            if(b==0 && c ==0){
                cout<<"PTVN"<<endl;
            }
            else{cout<<"PT co nghiem kep: x1 = x2 = "<<(-b)/2*a<<endl;}
        }else if(delta>0){
            cout<<"PT co hai nghiem phan biet: \n\n\n"<<"x1 = "<<((-b+sqrt(delta))/(2*a))<<"\n\nx2 = "<<((-b-sqrt(delta))/(2*a))<<endl;
            
        }
    }else{
        cout<<"PTVN"<<endl;
    }

    }