#include <iostream>
#include <cmath>


int main()
{
    double a;
    int n;
    std::cin >> a >> n;
    std::cout.precision(10);
    if((int(a*n+0.5)%n)==0){
        std::cout<<int(a);
    }else{
        if(int(a*n+0.5)<n){
            std::cout<<(int(double(a)*n+0.5)%n/(double)n);
        }else{
            std::cout<<int(a)+int(double(a)*n+0.5)%n / (double)n;
        }
    }
    return 0;
    
    
}