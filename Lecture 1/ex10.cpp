#include <iostream>
using namespace std;
int main(){
    int a,tong=0;
    for(a=1;a<1000;a++){
        if(a%3==0 || a%5==0){

            tong +=a;
        }


        
    }cout<<tong<<endl;



    return 0;
}