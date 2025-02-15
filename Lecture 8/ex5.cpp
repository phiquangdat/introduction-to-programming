#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void DemKyTu(char s[]);
int myStrcmp(char s1[MAX], char s2[MAX]);
int myStrlen(char s[], int k);

int main()
{
	char s[MAX];
	fgets(s,sizeof(s)+1,stdin);	
	if (myStrcmp(s, "") == 0)
		cout << "Chuoi rong." << endl;
	else
		DemKyTu(s);

	return 0;
}int myStrcmp(char s1[], char s2[]){
    int len=myStrlen(s1,0);
	if(len==0 || s1[0]==' ') return 0;
	return 1;
}int myStrlen(char s[], int k){
    while (s[k] != '\0')
		k++;
	return k;
}
void DemKyTu(char s[]){
	int a[100],n=0;
	for(int i=0;i<(int)myStrlen(s,0);i++) {
	int d=1;
	for(int j=i+1;j<(int)myStrlen(s,0);j++)
	if(s[i]==s[j]) { d++;
	for(int k=j;k<(int)myStrlen(s,0);k++) s[k]=s[k+1];
	j--; 
	}
	a[n++]=d;
	}
	for(int i=0;i<(int)myStrlen(s,0);i++)
	{if(s[i]=='\n') {continue;}
	cout<<s[i]<<": "<<a[i]<<endl;}

}