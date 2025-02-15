
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void ChenChuoiTaiVitriK(char s[], char s1[], int k);
void Chuanhoa(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int vt, char s1[], int k);
int myStrstr(char s[], char s1[]);


int main()
{
	char s[MAX];

	fflush(stdin);
	gets(s);
	char s1[MAX];
	myStrcpy(s1, 0, s, 0);
	Chuanhoa(s1);
	cout << s << endl << s1 << endl;
	return 0;
}int myStrlen(char s[], int k){
    while (s[k] != '\0')
		k++;
	return k;
}void myStrcpy(char s[], int vt, char s1[], int k){
	int len2=myStrlen(s1,0);
	for(;vt<len2;vt++){
		s[vt]=s1[vt];
	}
}void Xoa(char s[],int vt){
	int n=myStrlen(s,0);
	for(int i=vt+1;i<n;i++){
		s[i-1]=s[i];
	}
}void xoadau(char s[]){
	while(true){
		if(s[0]==' '){
			Xoa(s,0);
		}else{
			break;
		}
	}
}
bool isWhiteSpace(char c) {
	return c == ' ' || c == '\t' || c == '\n';
}
void xoacuoi(char s[]){
	int len = myStrlen(s,0);
	int i = len-1;
	while(isWhiteSpace(s[i])) {
		s[i] = '\0';
		i--;
}
}
bool capitalSignal(char c) {
	return c == '.' ;
}
bool specialCharacter(char c) {
	return c == ',' || c == '.' || c == '(' || c == ')' 
	|| c == '?' || c == ':' || c == ';' || c == '!';
}
void xoagiua(char *s) {
	int i, j;
	int len = myStrlen(s,0);
	for(i = 0; i < len; i++) {
		if(isWhiteSpace(s[i]) && isWhiteSpace(s[i + 1])) {
			for(j = i + 1; j < len; j++) {
				s[j] = s[j + 1];
			}
			i--;
			len--;
		} else if(isWhiteSpace(s[i]) && specialCharacter(s[i + 1])) {
			for(j = i; j < len; j++) {
				s[j] = s[j + 1];
			}
			i--;
			len--;
		} else if(s[i] == '\t') {
			s[i] = ' ';
		}
	}
}
void Chuanhoa(char s[]){
	xoadau(s);
	xoacuoi(s);
	xoagiua(s);
}