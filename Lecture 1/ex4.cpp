#include <iostream>
#include <math.h>
using namespace std;
int main(){
    //Cau a
    int x;
    cout<<"Enter x: "<<endl;
    cin>>x;
    cout<<"y1= "<<4*((x*x)+10*x*sqrt(x)+3*x+1)<<endl;


    //Cau b
    cout<<"y2 = "<<(sin(3.14*x*x)+sqrt(x*x+1))/(pow(2.72,2*x)+cos(3.14*x/4))<<endl;



    return 0;
}