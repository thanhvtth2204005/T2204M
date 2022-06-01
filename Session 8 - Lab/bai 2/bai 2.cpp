#include<stdio.h>
#include<string.h>
#include<cstring>
#include<iostream>
int main(){
	char s1[100],s2[100];
	printf ("Nhap chuoi s1: \n");
	std::cin.getline(s1,100);
	printf ("Nhap chuoi s2: \n");
	std::cin.getline(s2,100);
	int n = strlen(s1);
	int k = strlen(s2);
	if (n-k == 0){
		printf ("Hai chuoi giong nhau \n");
	}else if (n-k<0){
		printf ("Chuoi dung truoc trong day alphabet la s1 \n");
	}else{
		printf ("Chuoi dung truoc trong day alphabet la s2");
	}
}