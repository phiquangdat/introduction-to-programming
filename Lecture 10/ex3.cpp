#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
struct DATHUC{
    int somu;
    double heso;
    int sodathuc;
};
DATHUC* Nhap(){
    DATHUC* a;
    a = new DATHUC[100];
    cin>>a->sodathuc;
    for(int i=0;i<a->sodathuc;i++){
        cin>>(a[i].heso);
        cin>>(a[i].somu);
    }
    return a;
}
void Xuat(DATHUC& b){
    DATHUC *temp;
    temp = &b;
    int flag=0;
    int max=0;
    for(int i=0;i<b.sodathuc;i++){
        if((*(temp+i)).heso==0){
            flag++;
        }
    }if(flag==b.sodathuc){
            cout<<"0";
        }
    for(int i=0;i<b.sodathuc;i++){
        if(((*(temp+i)).somu) >= max && ((*(temp+i)).heso)!=0 ){
            max = ((*(temp+i)).somu);
        }
    }
    for(int i=0;i<b.sodathuc;i++){
        if(i!=0 && (*(temp+i)).heso>0 && ((*(temp+i)).somu)!=max){
            cout<<"+";
        }
        if((*(temp+i)).heso==1 ){
            if((*(temp+i)).somu==1){
        cout<<"x";
        }else if((*(temp+i)).somu==0){
        cout<<(*(temp+i)).heso;
        }
        else{
        cout<<"x^"<<(*(temp+i)).somu;
        }
        }
        else if((*(temp+i)).heso==-1 ){
            if((*(temp+i)).somu==1){
        cout<<"-x";
        }else if((*(temp+i)).somu==0){
        cout<<(*(temp+i)).heso;
        }
        else{
        cout<<"-x^"<<(*(temp+i)).somu;
        }
        }
        else if((*(temp+i)).heso==0){
            continue;
        }
        else
        {if((*(temp+i)).somu==1){
        cout<<(*(temp+i)).heso<<"x";
        }else if((*(temp+i)).somu==0){
        cout<<(*(temp+i)).heso;
        }
        else{
        cout<<(*(temp+i)).heso<<"x^"<<(*(temp+i)).somu;
        }
        }
    }
}

double TinhDaThuc(DATHUC& B,double x){
    int i;
    double kq=0;
    DATHUC* c;
    c = &B;
    int n=B.sodathuc;
    for(i=0;i<=n;i++){
        kq += ((*(c+i)).heso)*pow(x,(*(c+i)).somu);

    }
    return kq;

}
int main() {
    DATHUC *B; B = Nhap();
    cout << "Da thuc vua nhap la: "; Xuat(*B);
    double x; cin >> x;
    cout << "\nVoi x=" << x << ", gia tri da thuc la: "
         << setprecision(2) << fixed << TinhDaThuc(*B, x);
    return 0;
}