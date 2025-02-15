#include <iostream>
using namespace std;
int largest_input(){
    int t;
    cin>>t;
    if(!t) return INT_MIN;
    return max(t,largest_input());





}
int main(){
	cout << largest_input();
}