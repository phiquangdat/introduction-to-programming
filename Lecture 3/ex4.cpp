#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;


int main() {
    int x,a=1,b=1,c,fibonacci;
    cin>>x;
    if(x<1 || x>30){
        cout<<"So "<<x<<" khong nam trong khoang [1,30]."<<endl;
    }else{
        for(int i=1;i<=x;i++){
            fibonacci=a;
            c=a+b;
            a=b;
            b=c;
        }cout<<fibonacci<<endl;
    }
    return 0;
}