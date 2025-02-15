
#include <iostream>
#include <string.h>
using namespace std;
#define MAX 255

int myStrlen(char *s);
char* myStrcat(char *s1, char *s2);

int main()
{
	char *s1 = NULL, *s2 = NULL;
	s1 = new char[MAX];
	s2 = new char[MAX];
	cin.getline(s1,MAX);
	cin.getline(s2,MAX);
	char *s = myStrcat(s1, s2);
	puts(s);
	return 0;
}int myStrlen(char *s){
    int n = 0;
	while (s[n] != '\0')
		n++;
	return n;
}
char* myStrcat(char *s1, char *s2){
    char* s3=new char[100];
    int str1=myStrlen(s1),str2=myStrlen(s2);
    if(str2>MAX){
        int dem,len3=0;
        for(dem=0;dem<str1;dem++)
        *(s3+len3++)=*(s1+dem);
    *(s3+len3)='\0';
    }else if(str1>MAX){
        int dem,len3=0;
        for(dem=0;dem<str2;dem++)
        *(s3+len3++)=*(s2+dem);
    *(s3+len3)='\0';
    }else
    {int dem,len3=0;
        for(dem=0;dem<str1;dem++)
        *(s3+len3++)=*(s1+dem);
    *(s3+len3)='\0';
    for(dem=0;dem<str2;dem++)
        *(s3+len3++)=*(s2+dem);
    *(s3+len3)='\0';
}    return s3;
}
