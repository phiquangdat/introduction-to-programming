#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#include<stdio.h> 
int check(int n){
    int count=0;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) count++;
    }
    if(count==0) return 1;
    return 0;
}
void inputArray(int a[], int &n){
    cin>>n;
    int count=0,i=2,j=0;
    while(j<n){
    // while(count<n){
        if(check(i)){
            // count++;
            a[j]=i;
            j++;
        }
        i++;
        
    }
}
// }
int containedY(int a[], int n,int y){
    int count=0,temp=0;
    for(int i=0;i<n;i++){
    do{
        temp = a[i]%10;
        if(temp==y) {count++;
        break;}
        (a[i])/=10;
    }while(a[i]>0);
}
    return count;
}
int main(){
	int a[100],n,y;
	cin>>y;
	inputArray(a,n);
	cout<<containedY(a,n,y);

	return 0;	
}