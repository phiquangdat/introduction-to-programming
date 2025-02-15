#include <iostream>
using namespace std;
int solan(int a[100][100],int n,int m,int  k){
    int dem=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==k){
                dem++;
            }
        }
    }
    return dem;
}
bool laplai(int a[100][100],int n,int m,int k){
    bool flag=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(k==a[i][j]){
                flag=false;
            }
        }
    }
    return flag;
}
int main(){ 
    int n,m,k,dem=0,dem1,t;
    cin>>n>>m;
    int a[100][100],b[100][100];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    cin>>k;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(solan(a,n,m,(a[i][j]))==k && laplai(b,n,m,(a[i][j]))){
                cout<<a[i][j]<<" ";
                dem++;
                b[i][t]=a[i][j];
                t++;
            }
        }
        }
    if(dem==0){
        cout<<"Khong co";
    }
    return 0;
}
