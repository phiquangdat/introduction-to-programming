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
void kiemtraso(int a[],int n){
    int dem=0,dem1=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0) dem++;
        else if(a[i]%2!=0) dem1++;
    }
    if(dem==(n)) cout<<"\nHam chan"<<endl;
    else if(dem1==(n)) cout<<"\nHam le"<<endl;
    else cout<<"\nHam binh thuong"<<endl;
}
int main() {
    int a[100],n;
    cin>>n;
    nhap(a,n);
    xuat(a,n);
    kiemtraso(a,n);
    return 0;
}