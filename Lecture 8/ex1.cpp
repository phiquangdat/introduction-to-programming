#include <iostream>
#include <string.h>
#include<stdio.h>
using namespace std;
#define MAX 300

void countWords(char s1[]);
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void myMemmove(char s[], int vt, int k);
int myStrstr(char s[], char s1[]);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);

int main()
{
	char s[MAX];
	fgets(s,sizeof(s)+1,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Empty array." << endl;
	else
		countWords(s);
		
	return 0;
}
int myStrcmp(char s1[], char s2[]){
    int len=myStrlen(s1,0);
	if(len==0 || s1[0]==' ') return 0;
	return 1;
}
int myStrlen(char s[], int k){
    while (s[k] != '\0')
		k++;
	return k;
}
int myStrcmp1(char s1[], char s2[]){
    int ketqua=0;
    size_t len1=myStrlen(s1,0);
    size_t len2=myStrlen(s2,0);
    size_t min = len1<len2?len1:len2;
    for(int i=0;i<min;i++){
        ketqua=s1[i]-s2[i];
        if(ketqua!=0)
            break;
        
    }
    if(ketqua==0){
        return 0;
    }else
        return 1;


}
char* myStrcpy(char* destination, const char* source)
{
   
    if (destination == NULL) {
        return NULL;
    }
 
   
    char *ptr = destination;
 
    
    while (*source != '\0')
    {
        *destination = *source;
        destination++;
        source++;
    }
 
    
    *destination = '\0';
 
    
    return ptr;
}
void countWords(char s1[]){
	char res[100][20];
	int i=0;
	char *p;
	const char delim[]=" \t\n";
	for(p=strtok(s1,delim);p!=NULL;p=strtok(NULL,delim)){
		myStrcpy(res[i],p);
		i++;
	}
	int m=0;
	int count=0;
	for(int z=0;z<i;z++){
		for(int j=z;j<i;j++){
			if(myStrcmp1(res[z],res[j])==0)	count++;
		}
		for(int k=0;k<z;k++){
			if(myStrcmp1(res[z],res[k])==0){
				m=1;
				break;
			}
		}
		if(m==0)
		cout<<res[z]<<": "<<count<<endl;
		count=0;
		m=0;
	}
}