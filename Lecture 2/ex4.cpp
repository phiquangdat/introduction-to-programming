
#include <iostream>
using namespace std;


int main()
{
    int age; cin>>age;
    char gender; cin>>gender;
    if(age>=0 && age<=100 ){
        if(gender =='m' || gender =='M'||gender=='f' || gender =='F'){
            if(age>=21 ){
                if(gender =='m' || gender == 'M'){
                    cout<<"1"<<endl;
                }else {
                    cout<<"2"<<endl;
                }
            }else {
                if(gender =='m' || gender == 'M'){
                    cout<<"3"<<endl;
                }else{
                    cout<<"4"<<endl;
                }
            }
            
        }else{
        cout<<"I do not know why"<<endl;

    }
    }
    return 0;
}