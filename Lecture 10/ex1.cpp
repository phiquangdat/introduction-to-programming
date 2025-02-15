#include <iostream>
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
DATHUC& Tong2DaThuc(DATHUC *a,DATHUC *b){
    DATHUC* c;
    int max= (a->sodathuc)>(b->sodathuc)?a->sodathuc:b->sodathuc;
    c = new DATHUC[max+1];
    int i=0,j=0,k=0,dem=0;
    c->sodathuc = 100;
    while(i<a->sodathuc && j<b->sodathuc){
        if(a[i].somu==b[j].somu){
            c[k].heso=a[i].heso+b[j].heso;
            c[k].somu=a[i].somu;
            i++;
            j++;
            k++;
            dem++;
        }
        else if(a[i].somu>b[j].somu){
            c[k].heso=a[i].heso;
            c[k].somu=a[i].somu;
            i++;
            k++;
            dem++;
        }
        else {
            c[k].heso=b[j].heso;
            c[k].somu=b[j].somu;
            j++;
            k++;
            dem++;
        }
    }
    while(i<a->sodathuc){
        c[k].somu=a[i].somu;
        c[k].heso=a[i].heso;
        i++;
        k++;
        dem++;
    }
    while(j<b->sodathuc){
        c[k].somu=b[j].somu;
        c[k].heso=b[j].heso;
        j++;
        k++;
        dem++;
    }c->sodathuc = dem;
    return *c;
}


int main() {
    DATHUC *A, *B;
    A = Nhap();
    B = Nhap();
    cout << "Da thuc A: "; Xuat(*A);
    cout << "\nDa thuc B: "; Xuat(*B);
    cout << "\nA+B = "; Xuat(Tong2DaThuc(A, B));
    return 0;
}