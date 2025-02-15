#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void Chuanhoa(char *s);
int main()
{
	char *s;
	s = new char[MAX];
	cin.getline(s,MAX);	//Nhap chuoi s	
	Chuanhoa(s);
	cout << s << endl;
	return 0;
}int myStrlen(char *s, int k){
    while (s[k] != '\0')
		k++;
	return k;
}
void chuhoa(char *s) {
    s[0]=toupper(s[0]);
    for(int i=1;i<myStrlen(s,0);i++) 
    if(s[i]==' ') {
    s[i+1]=toupper(s[i+1]);
    i++; }
    else
    {
    if(s[i]>='A' && s[i]<='Z') s[i]=s[i]+32;
    }
}void Xoa(char *s,int vt){
	int n=myStrlen(s,0);
	for(int i=vt+1;i<n;i++){
		s[i-1]=s[i];
	}
}void xoadau(char *s){
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

void xoacuoi(char *s){
	int len = myStrlen(s,0);
	int i = len-1;
	while(isWhiteSpace(s[i])) {
		s[i] = '\0';
		i--;
}
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
void Chuanhoa(char *s){
    xoadau(s);
    xoacuoi(s);
    xoagiua(s);
    chuhoa(s);
}