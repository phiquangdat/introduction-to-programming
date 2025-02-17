#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

void insertStringAtPosK(char s[], char s1[], int k);
void normalize(char s[]);
int myStrlen(char s[], int k);
bool myStrcat(char s[], char s1[], char s2[]);
void myStrcpy(char s[], int pos, char s1[], int k);
int myStrstr(char s[], char s1[]);

int main()
{
    char s[MAX];

    fflush(stdin);
    gets(s);
    char s1[MAX];
    myStrcpy(s1, 0, s, 0);
    normalize(s1);
    cout << s << endl << s1 << endl;
    return 0;
}

int myStrlen(char s[], int k){
    while (s[k] != '\0')
        k++;
    return k;
}

void myStrcpy(char s[], int pos, char s1[], int k){
    int len2 = myStrlen(s1, 0);
    for(; pos < len2; pos++){
        s[pos] = s1[pos];
    }
}

void remove(char s[], int pos){
    int n = myStrlen(s, 0);
    for(int i = pos + 1; i < n; i++){
        s[i - 1] = s[i];
    }
}

void removeLeadingSpaces(char s[]){
    while(true){
        if(s[0] == ' '){
            remove(s, 0);
        }else{
            break;
        }
    }
}

bool isWhiteSpace(char c) {
    return c == ' ' || c == '\t' || c == '\n';
}

void removeTrailingSpaces(char s[]){
    int len = myStrlen(s, 0);
    int i = len - 1;
    while(isWhiteSpace(s[i])) {
        s[i] = '\0';
        i--;
    }
}

bool isCapitalSignal(char c) {
    return c == '.';
}

bool isSpecialCharacter(char c) {
    return c == ',' || c == '.' || c == '(' || c == ')' 
        || c == '?' || c == ':' || c == ';' || c == '!';
}

void removeMiddleSpaces(char *s) {
    int i, j;
    int len = myStrlen(s, 0);
    for(i = 0; i < len; i++) {
        if(isWhiteSpace(s[i]) && isWhiteSpace(s[i + 1])) {
            for(j = i + 1; j < len; j++) {
                s[j] = s[j + 1];
            }
            i--;
            len--;
        } else if(isWhiteSpace(s[i]) && isSpecialCharacter(s[i + 1])) {
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

void normalize(char s[]){
    removeLeadingSpaces(s);
    removeTrailingSpaces(s);
    removeMiddleSpaces(s);
}
