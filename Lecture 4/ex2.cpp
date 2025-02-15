#include <iostream>
#include <math.h>
using namespace std;
char doi_ky_tu(){
  char n;
    do{
        cout<<"Nhap ky tu "<<endl;
        cin>>n;
    }while(n<'A' || n>'Z');
    return n+32;
}
float pt_bac_nhat(){
   float a,  b;
    cout<<"Nhap a "<<endl;
    cin>>a;
    cout<<"Nhap b "<<endl;
    cin>>b;
    return ((-b)/a);
}
float pt_bac_hai(){
    double a,b,c,delta;
    cout<<"Nhap a "<<endl; cin>>a;
    cout<<"Nhap b "<<endl;  cin>>b;
    cout<<"Nhap c "<<endl;  cin>>c;
    delta = (b*b)-(4*a*c);
    if(delta<0){
        cout<<"PTVN"<<endl;
    }else if(delta == 0){
        cout<<"PT co nghiem kep: x1 = x2 = "<<(-b)/(2*a)<<endl;

    }else if(delta>0){
        cout<<"PT co hai nghiem phan biet: \n\n"<<"x1 = "<<(((-b)+sqrt(delta))/(2*a))<<"\n\nx2 = "<<(((-b)-sqrt(delta))/(2*a))<<endl;

    }
}
int gia_tri_nho_nhat(int a,int b ,int c, int d , int e){
    if(a>b) e =a;
    else e =b ;
    
    return e;
}
int main(){
    cout<<doi_ky_tu()<<endl;
    cout<<pt_bac_nhat()<<endl;
    pt_bac_hai();
    cout<<gia_tri_nho_nhat(1,2,3,4,5);




    return 0;
}