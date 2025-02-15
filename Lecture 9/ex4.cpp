
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrlen(char *s);
char* myStrcat(char *s1, char *s2);

void Capphat(int *&a)
{ a = new int[5];
for(int i=0; i<5; i++) { a[i]=i+1;
cout<< a[i];
} }
int main(){
    
	return n;
}
char* myStrcat(char *s1, char *s2){
    int str1=myStrlen(s1),str2=myStrlen(s2);
        for(int i=0;(i<str2) && (s2[i]!='\0');i++)
            s1[str1+i]=s2[i];
            s1[str1+str2]='\0';
        int str3=myStrlen(s1),str4=myStrlen(s2);
        for(int o=0;o<str3;o++){
            if(s1[o]=='\n'){
                s1[o]=' ';
            }
        }
      return s1;
}
