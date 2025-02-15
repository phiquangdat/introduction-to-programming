#include <iostream>
#include <string.h>
#include <math.h>
#include <iomanip>
#include <stdio.h>
#define MAX 100
using namespace std;
int myStrlen(char s[], int k)
{
	int length = 0 ;
	int i = 0 ;
	while (s[i] != '\n')
	{
		++length;
		++i;
	}

	return length;
}

int myStrcmp(char s1[], char s2[])
{
	if (myStrlen(s1, 0) == 0) return 0;
	int m = {(myStrlen(s1,0) < myStrlen(s2,0)) ? (myStrlen(s1,0)) : myStrlen(s2,0) };

	for (int i = 0; i <= m; ++i)
	{
		if (s1[i] > s2[i])
			return 1;
		if (s1[i] < s2[i])
			return -1;
	}

	if (myStrlen(s1, 0) == myStrlen(s2, 0))
		return 0;
	if (m == myStrlen(s1, 0))
		return -1;
	else
		return 1;
}



void myStrcpy(char s[], int vt, char s1[], int k)
{
	for (int i = 0; i < k; ++i)
		s1[i] = s[vt + i];
	s1[k] = '\n';
	s1[k + 1] = '\0';
}

void myMemmove(char s[], int vt, int k)
{
	int m = { myStrlen(s,0) };
	if (vt + k < m)
	{
		for (int i = vt; i < m - k; ++i)
			s[i] = s[k + 1 + i];
		s[m - k] = '\n';
		s[m - k + 1] = '\0';
	}
	else
	{
		s[vt] = '\n';
		s[vt + 1] = '\0';
	}
}

void DemTieng(char s1[])
{
	
}
void xoa(char s[], int k) {
	int n = myStrlen(s, 0);
	for (int i = k; i < n - 1; i++) {
		s[i] = s[i + 1];
	}
	s[n - 1] = '\n';
	s[n] = '\0';
}
int main()
{
	int g = 0;
	char s1[MAX];
	fgets(s1, sizeof(s1) + 1, stdin);
	
	int q = myStrlen(s1, 0);
	for (int i = 0; i < myStrlen(s1, 0); i++) {
		if (s1[i] == '.' || s1[i] == ',') xoa(s1, i); 
	}
	for (int i = 0; i < myStrlen(s1, 0); i++) {
		s1[i] = tolower(s1[i]);
	}

	int count[MAX] = { 0 };
	int l = { 0 };
	while (s1[l] == ' ')
		++l;
	int amount = { 0 };
	int r = { myStrlen(s1,0) };

	while (l < r)
	{
		int n = { l };
		while (s1[n] != ' ' && n < r)
			++n;

		char s2[MAX];
		myStrcpy(s1, l, s2, n - l);
		++count[amount];
		int k = { n };

		while (s1[n] == ' ' && n < r)
			++n;
		while (n < r)
		{
			int m = { n };
			while (s1[m] != ' ' && m < r)
				++m;

			char s3[MAX];
			myStrcpy(s1, n, s3, m - n);

			if (!myStrcmp(s2, s3))
			{
				++count[amount];
				myMemmove(s1, n, m - n);
				r = myStrlen(s1, 0);
			}
			else
				n = m + 1;
			while (s1[n] == ' ' && n < r)
				++n;
		}

		if (count[amount] > 1) {
			for (int i = 0; i < myStrlen(s2, 0); ++i)
			{
				std::cout << s2[i]; g++;
			}
			std::cout << " ";
		}

		l = k + 1;
		while (s1[l] == ' ' && l < r)
			++l;
		++amount;
	}
	if (g == 0) cout << "0";
    return 0;
}