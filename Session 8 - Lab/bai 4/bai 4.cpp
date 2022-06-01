#include<iostream>
#include<string.h>
int main (){
	char s[100];
	printf ("Nhap chuoi :\n");
	scanf ("%s",s);
	int i = 0;
	int n = strlen(s);
	for (i =0;i<n/2;i++){
		char temp = s[i];
		s[i]= s[n-i-1];
		s[n-i-1]= temp;
	}
	printf ("chuoi dao nguoc la :%s",s);
	
}