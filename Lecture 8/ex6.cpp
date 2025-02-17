#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrcmp(char s1[], char s2[]);
int myStrlen(char s[], int k);
void myStrcpy(char s[], int vt, char s1[], int k);
void mySubstr(char s[], int b, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void StringReverse(char st[]);

int main()
{
	char s[MAX];
	fgets(s,sizeof(s)+1,stdin);
	if (myStrcmp(s, "") == 0)
		cout << "Empty array." << endl;
	else
	{
		StringReverse(s);
		cout << s << endl;
	}
	return 0;
}
int myStrlen(char s[], int k){
    while (s[k] != '\0')
		k++;
	return k;
}int myStrcmp(char s1[], char s2[]){
    int len=myStrlen(s1,0);
	if(len==0 || s1[0]==' ') return 0;
	return 1;
}
void StringReverse(char st[]){
    void reversed(string& s, int l, int r)
{
 
    while (l < r) {
        swap(s[l], s[r]);
        l++;
        r--;
    }
}
}