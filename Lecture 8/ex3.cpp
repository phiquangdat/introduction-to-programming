#include <iostream>
#include <string.h>
using namespace std;
#define MAX 300

int myStrlen(char s[], int k);
void myStrcpy(char s[], int pos, char s1[], int k);
void mySubstr(char s[], int start, int count, char ss[]);
bool myStrcat(char s1[], char s2[]);
void insertStringAtPosK(char s[], char s1[], int k);

int main()
{
    char s[MAX], s1[MAX];
    fgets(s, sizeof(s) + 1, stdin);
    fgets(s1, sizeof(s1) + 1, stdin);
    int k;
    cin >> k;
    if (k < 0 || k > myStrlen(s, 0))
        cout << "Position " << k << " is not valid." << endl;
    else {
        insertStringAtPosK(s, s1, k);
        puts(s);
    }
    return 0;
}

int myStrlen(char s[], int k) {
    while (s[k] != '\0')
        k++;
    return k;
}

void myStrcpy(char s[], int pos, char s1[], int k) {
    for (int i = 0; (i < k) && (s1[i] != '\0'); i++) {
        s[i] = s1[pos + i];
    }
    s[k] = '\0';
}

void insertStringAtPosK(char s[], char s1[], int k) {
    int len2 = strlen(s1) - 1;
    int len1 = strlen(s) - 1;
    for (int x = 0; x < len2; x++) {
        for (int j = len1 - 1; j >= k - 1; j--) {
            s[j + 1] = s[j];
        }
        len1 += len2;
        s[len1] = '\0';
    }
    for (int j = 0; j < len2; j++) {
        s[k - 1] = s1[j];
        k++;
    }
}
