#include<iostream>
#include<string.h>
int main (){
	char arr[1000];
	printf ("Nhap chuoi :");
	scanf ("%s",arr);
	int n = strlen(arr);
	int temp;
	for (int i = 0; i<n;i++){
		for (int j=1;j<n;j++){	
			if(arr[j]<arr[j-1]){
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1]=temp;
			}
		}
	}
	printf ("Ket qua : %s",arr);
}