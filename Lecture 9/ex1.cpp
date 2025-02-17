#include <iostream>
using namespace std;
int main()
{	int m,n;
    cin>>m>>n;
    double a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int j=0,z;
    for(int i=0;i<n;i++){
        double max = a[0][i];
        z=j;
        while(j<m){
            if(a[j][i]>=max){
                max=a[j][i];
            }
            j++;
        }
        j=z;
        cout<<"The largest value of column "<<i<<" is: "<<max<<endl;
    }
	return 0;
}