#include <iostream>
using namespace std;
void NhapMaTran(double a[][100],int& m,int& n){
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
}
bool matrandonvi(double a[][100],int& m,int& n){
	bool dem1=true;
	for (int i = 0 ; i < m ; i ++) {
	    if (a[i][i] != 1)  {
	         dem1 = false;
	         break;
	    }
	}
	return dem1;
}
int main()
{	double a[100][100];
	int i,j,m,n;
    NhapMaTran(a,m,n);
	bool check1 = true,check2 = true, dem2 = true;
	
	if (matrandonvi(a,m,n) == false) {
	    cout << "No";
	} 
	if (matrandonvi(a,m,n) == true) {
		int dem3 = 0;
		for (int i = 0 ; i < (m-1) ; i++) { 
	       for (int j = i +1 ; j < m ; j++) {
	       	if (a[j][i] != 0) {
	       		check2 = false;
	       		break;
		   }
	}
	if (check2 == false) {
		dem3++;
	}
	if (dem3 == 2 ) {
		dem2 = false;
		break;
	}
	check2 = true;
}

   if (matrandonvi(a,m,n) == true && dem2 == true) {
   	for (int i = 1 ; i < m ; i++) {
   		for (int j = 0 ; j < i ; j++) {
   			if(a[j][i] != 0 ) {
   				check1= false;
   				break;
			   }
		   }
	   }
	if (check1 ) {
		cout <<"Yes";
	}   else {
		cout <<"No";
	}
   	
   }
   if (matrandonvi(a,m,n) == true && dem2 == false) {
   	cout << "No";
   }
	    	

	return 0;
}
}