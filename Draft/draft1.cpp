#include <iostream>
using namespace std;
int time(int a[100][100],int n,int m,int  k){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==k){
                count++;
            }
        }
    }
    return count;
}
bool repeat(int a[100][100],int n,int m,int k){
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
    int n,m,k,count=0,count1,t;
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
            if(time(a,n,m,(a[i][j]))==k && repeat(b,n,m,(a[i][j]))){
                cout<<a[i][j]<<" ";
                count++;
                b[i][t]=a[i][j];
                t++;
            }
        }
        }
    if(count==0){
        cout<<"None";
    }
    return 0;
}
