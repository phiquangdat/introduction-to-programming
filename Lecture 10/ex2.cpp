#include <iostream>
using namespace std;
struct DONTHUC{
    double heso;
    int somu;
};
struct DATHUC{
    DONTHUC* dt = new DONTHUC[100];
    int sodonthuc;
    DATHUC(){
        for(int i=0;i<100;i++){
            this->dt[i].heso=this->dt[i].somu=0;
        }
        sodonthuc = 0;
    }
};
DATHUC* Nhap(){
    DATHUC* a;
    a = new DATHUC[100];
    cin>>a->sodonthuc;
    for(int i=0;i<a->sodonthuc;i++){
        cin>>(a[i].dt->heso);
        cin>>(a[i].dt->somu);
    }
    return a;
}
void Xuat(DATHUC& b){
    for(int i=0;i<b.sodonthuc;i++){
        cout<<b.dt->heso<<b.dt->somu;
    }
}
int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    //cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}for(int i=0;i<b.sodathuc;i++){
        if(i!=0 && (*(temp+i)).heso>0){
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