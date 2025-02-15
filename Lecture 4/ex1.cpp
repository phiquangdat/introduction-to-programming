#include <iostream>
using namespace std;
int dem_so_luong(int n){
    int count =0;
    while(n>0){
        n /= 10;
        count++;
    }
    return count;
}
int tong_cua_chu_so(int n){
    int tong=0;
    int a;
    while(n>0){
        a = n%10;
        tong += a;
        n /= 10;
    }
    return tong;
}
int tong_cac_chu_so_le(int n ){
    int tong=0;
    int a;
    
    while(n>0){
        a = n% 10;
        if(a%2!=0){
            tong +=a;
        }
        n = n/10;
    }
    return tong;
}
int tong_cac_chu_so_chan(int n ){
    int tong=0;
    int a;
    
    while(n>0){
        a = n% 10;
        if(a%2==0){
            tong +=a;
        }
        n = n/10;
    }
    return tong;
}
int so_dao(int n){
    int tong=0;
    int a;
    while(n>0){
        a = n% 10;
        tong = tong*10 + a;
        n /= 10;
    }
    return tong;
}
int main(){
    int n;
    do{
        cout<<"Nhap so nguyen n: "<<endl;
        cin>>n;
    }while(n<=0);
    cout<<"So luong chu so cua n la "<<dem_so_luong(n)<<endl;
    cout<<"Tong cua cac chu so cua n la "<<tong_cua_chu_so(n)<<endl;
    cout<<"Tong cac chu so le cua n la "<<tong_cac_chu_so_le(n)<<endl;
    cout<<"Tong cac chu so chan cua n la "<<tong_cac_chu_so_chan(n)<<endl;
    cout<<"So dao cua n la "<<so_dao(n)<<endl;







    return 0;
}