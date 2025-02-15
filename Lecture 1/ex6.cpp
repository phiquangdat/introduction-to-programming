#include <iostream>
using namespace std;
int main(){
    int Tongsonut,sonut;
    int a,b,c,d;
    cout<<"Nhap so nut:";
    cin>>sonut;
    d = sonut %10;
    sonut /= 10;
    c = sonut %10;
    sonut /= 10;
    b =sonut%10;
    sonut /= 10;
    a=sonut %10;

    Tongsonut = a+b+c+d;
    Tongsonut %= 10;
    cout<<"So nut :"<<Tongsonut<<endl;





    return 0;
}