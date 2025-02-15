#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#include<stdio.h> 
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
    int dem=0,i=2,j=0;
    while(j<n){
    // while(dem<n){
        if(check(i)){
            // dem++;
            a[j]=i;
            j++;
        }
        i++;
        
    }
}
// }
int SoPhanTuChuaY(int a[], int n,int y){
    int dem=0,temp=0;
    for(int i=0;i<n;i++){
    do{
        temp = a[i]%10;
        if(temp==y) {dem++;
        break;}
        (a[i])/=10;
    }while(a[i]>0);
}
    return dem;
}
int main(){
	int a[100],n,y;
	cin>>y;
	NhapmangSNT(a,n);
	cout<<SoPhanTuChuaY(a,n,y);

	return 0;	
}