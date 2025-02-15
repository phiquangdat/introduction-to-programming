#include <iostream>
using namespace std;
#define MAXR 100
#define MAXC 100
void NhapMaTran(double a[][100],int& m,int& n){
    cin>>m;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
}
bool cot(double a[][100],int& m,int& n){
    int dem=0,j=0,i=0,x=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]!=0) dem++;
        }
    }for(int i=0;i<n;i++){
        if(a[i][i]!=0) x++;
    }
    if(dem==((m*m)-(x+1)) || dem<=((m*m)-x)) return true;
    return false;
}
int main(){
    int n,m;
    double  a[100][100];
	NhapMaTran(a,n,m);
    if(cot(a,m,n)) cout<<"Yes";
    else cout<<"No";
	return 0;
}