#include <iostream>
using namespace std;
int main(){
    //vd1
    int n;
    do {
        cin>>n;
    }
    while(n<0);
    int sum=0;
    for(int i=1;i<=n;i++){
        sum +=i;
    }
    cout<<sum<<endl;
    //vd2
    for(int i=0;i<=n;i++){
        if(n%i==0){
            cout<<i<<endl;
        }
    }
    //vd3
    int count=0,a;
    a = n;
    while(n>=10){
        n /=10;
        count++;
    }cout<<count+1<<endl;
    n=a;
    //vd4
    int count2=0;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            count2++;
        }
        if(count2>2){
            break;
        }
    }if(count2==2){
        cout<<"So nguyen to"<<endl;
    }else{
        cout<<"Khong phai so nguyen to"<<endl;
    }
    //vd5
    for(int i=1;i<=50;i++){
        if(i==3 || i==9 || i==31){
            continue;
        }
        if(i%2!=0){
            cout<<i<<endl;
        }
        
    }
    return 0;
}