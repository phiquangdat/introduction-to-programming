ChenChuoiTaiVitriK(s,s1,k);
		puts(s);
	}
    return 0;
}
int myStrlen(char s[], int k){
    while (s[k] != '\0')
		k++;
	return k;
}
void myStrcpy(char s[], int vt, char s1[], int k){
	for(int i=0;(i<k) && (s1[i]!='\0');i++){
		s[i]=s1[vt+i];
	}s[k]='\0';
}
void ChenChuoiTaiVitriK(char s[], char s1[], int k){
	int test1=0,test2=0;
		int len2=strlen(s1)-1;
		int len1=strlen(s)-1;
		for(int x=0;x<len2;x++)
		{
			for(int j=len1-1;j>=k-1;j--)
			{
				s[j+1]=s[j];
			}
			len1+=len2;
			s[len1]='\0';
		}		
		for(int j=0;j<len2;j++)
		{
			s[k-1]=s1[j];
			k++;
		}
		
}

		