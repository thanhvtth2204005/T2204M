#include<stdio.h>
int main(){
	int arr[100];
	int n;
	printf("Nhap n :\n");
	scanf("%d",&n);
	printf("Nhap mang :\n");
	for (int i= 0; i<n;i++){
        scanf("%d",&arr[i]);		
	}
	int slcc ;
	for (int i =0;i<n;i++){
		if (arr[i]% 2 == 1){
			slcc = arr[i];
		}
	}
   	printf ("so le cuoi cung la :%d",slcc);
	return 0;
}
