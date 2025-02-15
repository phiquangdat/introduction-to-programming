#include <iostream>
#include <math.h>
using namespace std;
int check(int n){
    int dem=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) dem++;
    }
    if(dem==0) return 1;
    return 0;
}
void NhapmangSNT(int a[], int &n){
    cin>>n;
    int dem=0,i=2;
    for(int j=0;j<n;j++){
    while(dem<n){
        if(check(i)){
            dem++;
            cout<<i<<" ";
        }
        i++;
    }
}
}
int main(){
	int a[100];
   int dem=0,i=2,j=0,n=10;
    while(j<n){
    while(dem<n){
        if(check(i)){
            dem++;
            a[j]=i;
			j++;
        }
        i++;
    }}
	for(int z=0;z<n;z++){
		cout<<a[z]<<" ";
	}

    return 0;
}