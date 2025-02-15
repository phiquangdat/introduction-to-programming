#include <iostream>
using namespace std;
void nhap(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<"Nhap phan tu "<<i+1<<endl;
        cin>>a[i];
    }
}
void xuat(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
int timkiem1(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x) return i;
    }
    return 0;
}
int timkiem2(int a[],int n,int x){
     for(int i=0;i<n;i++){
        if(a[i]==x) return i;
}return -1;
}
void timkiem3(int a[],int n,int x){
    for(int i=0;i<n;i++){
        if(a[i]==x) cout<<i<<"\t"<<endl;
        else cout<<"Khong tim thay"<<endl;
}
}
int main() {
    int a[100],n,x;
    cout<<"Nhap n"<<endl;
    cin>>n;
    cout<<"Nhap x"<<endl;
    cin>>x;
    nhap(a,n);
    xuat(a,n);
    timkiem1(a,n,x);
    if(timkiem2(a,n,x)){
        cout<<"\nCo"<<endl;
    }else cout<<"\nKhong"<<endl;
    timkiem3(a,n,x);


    return 0;
}