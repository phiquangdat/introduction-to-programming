#include <iostream>
#include <cmath>


int main()
{
    double a;
    int n;
    std::cin >> a >> n;
    double result;
    std::cout.precision(10);
    result = (roundf(double(a)*n))/double(n);
    std::cout<<result;
    return 0;



}