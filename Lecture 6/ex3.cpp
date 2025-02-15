#include <iostream>
using namespace std;
//bai1
void nhap1(int a[],int n){
    int dem=0;
    for(int i=0;i<n;i++){
        do{
            cin>>a[i];
        }while(a[i]<=a[i-1]);
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<"\t";
    }
}
//bai2
void nhap2(int a[],int n){
    for(int i=0;i<n;i++){
        do{
            cin>>a[i];
        }while(a[i]<=99);
    } 
}
//bai3
void nhap3(int a[],int n){
    for(int i=0;i<n;i++){
        a[i] = rand() % 900+100;
    } 
}
//bai4
int kiemtratrung(int n,int a[],int k){
for(int i=0;i<n;i++){
if(a[i]==k) return 1;
}
return 0;
}
void nhap4(int &n,int a[]){
int temp;
for(int i=0;i<n;i++){
    cin>>temp;
if(kiemtratrung(n,a,temp)==1){
cout<<"Vui long nhap lai "<<endl;
    i-;
}
else a[i]=temp;
}
}
int main() {
    int a[100],n;
    cout<<"nhap n: ";
    cin>>n;
    nhap1(a,n);
    nhap2(a,n);
    nhap3(a,n);
    return 0;
}