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
	if (n == k){
		printf ("Hai chuoi co do dai bang nhau \n");
	}else if (n>k){
		printf ("Chuoi co do dai lon hon la s1 \n");
	}else{
		printf ("Chuoi co do dai lon hon la s2");
	}
}