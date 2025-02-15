#include <iostream>
using namespace std;
void NhapMaTran(int a[][100],int& m,int& n){
    cin>>m;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}
int main(){
    int a[100][100],m,n,dem=0,t;
    NhapMaTran(a,m,n);
    int j=0,i=0,z;
    int c,dem1=0,dem2=0;
    /*for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            c=i;
            while(a[i][j]==0 && i<(n-(i+j))){
            i++;
        }   
            if(a[i][j]!=0) dem1++; 
            i=c;
        }
    if(dem1>=1) dem2++;
    dem1=0;
    }
    if(dem2>=1) cout<<dem2;*/
    /* while(i<m){
        t=i;
        while(j<i){
            
            if(a[i][j]!=0) cout<<a[i][j]<<" ";
            while(a[t][j]==0){
                t++;
                if(a[t][j]!=0) cout<<a[t][j]<<" ";
            }j++;
        }i++;
    }*/
    
		for (int i = 1 ; i < m ; i++) {
   		for (int j = 0 ; j < i ; j++) {
   			//if(a[j][i] != 0 ) {
   				cout<<a[j][i]<<" ";
			   }
		   //}
	   }
    return 0;
}