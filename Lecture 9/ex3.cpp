#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
#include<stdio.h> 

int main()
{
	int a[1000],n;
    cin>>n;
    int i=0;
    while(i<n)
	{   cin>>a[i];
        i++;
	}int j=1;
    while(j<n){
        if(j%2){
            cout<<a[j]<<" ";
        }
        j++;
    }
    return 0;
}