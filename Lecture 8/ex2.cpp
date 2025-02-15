#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300
#include <stdio.h>
int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);
void reversePrint(const char *str)
{
    if (str)
    {
        reversePrint(strtok (NULL, " \t\n\r"));
        cout<< str;
    }
}


    
    
int main()
{	char string[] = "This is a sentence";
    reversePrint(strtok(string, " \t\n\r"));
    return 0;

	/*char s[MAX];
	fgets(s,sizeof(s)+1,stdin);
	if (myStrcmp(s,"") == 0)
		cout << "Chuoi rong." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;*/
}
int myStrlen(char s[], int k){
    while (s[k] != '\0')
		k++;
	return k;
}void dao_tu(char a[],int i,char b[],int &vt,int len)
{
	int x;
	for(int j=i;j<len;j++)
	{
		if(a[j]==' '||j==len-1)
		{
			x=j;
			break;
		}
	}
	for (int j=(x==len-1)?x:x-1;j>=i;j--)
	{
		b[vt]=a[j];
		vt++;
		//printf("%c",a[j]);
	}
	b[vt]=' ';
	vt++;
	//printf(" ");
}void printToSpace(const char *str) {
  do {
    putc(*str, stdout);
  } while(*str++ != ' ');
}
/*void StringReverse(char st[]){
    const char *p = strchr(st, ' ');
  if (p == NULL) {
    printf("%s", st);
  }
  else {
    reversePrint(p + 1);
    printToSpace(st);
}*/
int myStrcmp(char s1[], char s2[]){
    int len=myStrlen(s1,0);
	if(len==0 || s1[0]==' ') return 0;
	return 1;
}
/*void myStrcpy(char s[], int vt, char s1[], int k){
	for(int i=0;(i<k) && (s1[i]!='\0');i++){
		s[i]=s1[vt+i];
	}s[k]='\0';
}*/