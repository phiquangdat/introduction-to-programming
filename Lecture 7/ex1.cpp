#include <iostream>
using namespace std;
void nhapmang(int a[100][100],int& n,int& m){
    cout<<"Nhap so dong: ";
    cin>>n;
    cout<<"Nhap so cot: ";
    cin>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"Nhap phan tu a["<<i<<"]"<<"["<<j<<"]"<<endl;
            cin>>a[i][j];
        }
    }
}
void xuatmang(int a[100][100],int& n, int& m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<a[i][j]<<"\t";
            
        }
        cout<<endl;
    }
}
void timkiem(int a[100][100],int& n,int& m,int x){
    int dem=0;
    cout<<"Nhap x: ";
    cin>>x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==x){
                cout<<"a["<<i<<"]["<<j<<"]"<<endl;
                dem++;
            }
        }
    }
    if(dem==0){
        cout<<"Khong tim thay duoc"<<endl;
    }
}
void dcchinh(int a[100][100],int& n,int& m){
    int dem=0,tong=0;
    for(int i=0;i<n;i++){
                cout<<a[i][i]<<"\t";
                tong += a[i][i];
                dem++;
        }
    cout<<"\n"<<dem<<endl;
    cout<<tong<<endl;
    
}
void dcphu(int a[100][100],int& n,int& m){
    int dem=0,tong=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(i+j == n-1){
                cout<<a[i][j]<<"\t";
                tong += a[i][j];
                dem++;
        }}}
    cout<<"\n"<<dem<<endl;
    cout<<tong<<endl;
}
int main(){
    int a[100][100],n,m,x,fibonacci,b=1,c=1,d;
    for(int i=1;i<=3;i++){
            fibonacci=b;
            d=c+b;
            b=c;
            c=d;
        }cout<<fibonacci<<endl;
    return 0;
}
