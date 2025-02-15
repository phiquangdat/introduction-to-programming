#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
vector<int>prime(1000001);
void sieve(){
	for(int j=0;j<1000000;j++)
		prime[j]=1;
	prime[0]=prime[1]=0;
	for(int j=2;j<=sqrt(1000000);j++){
		if(prime[j]){
			for(int z=j*j;z<=1000000;z+=j){
				prime[z]=0;
			}
		}
	}
}
int UCLN(int m,int n){
	if(n==0) return m;
	return UCLN(n,m%n);
}
int sum_common_prime(int m, int n){
	sieve();
    int tong=0,dem=0,dapan;
    for(int i =2;i<=m;i++){
		if(UCLN(m,n)%i==0){
        if(prime[i]){
                tong+=i;
                dem++;
        }}
    }if(dem==0){
        dapan=-1;
    }else{
        dapan=tong;
    }
return dapan;
}
int main() {
	int m, n;
	cin >> m >> n;
	cout << sum_common_prime(m, n);
}
