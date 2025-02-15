#include <iostream>
using namespace std;
#define MAX 256
int main(){
    int n;
    cin>>n;
    int b=1,c=1,d,fibonacci;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            for(int z=1;z<=(i+j+1);z++){
            fibonacci=b;
            d=c+b;
            b=c;
            c=d;    
        }
        cout<<fibonacci<<" ";
        b=1;
        c=1;
        d=0;
    }cout<<endl;

}
    return 0;
}