#include<stdio.h>
int main(){
	int arr[100];
	int n ;
	printf ("Nhap n :\n");
	scanf("%d",&n);
	printf("Nhap mang :\n");
	for (int i = 0; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	int min,j;
	for (int i = 0; i < n ; i++){
		if(arr[i]>0){
			min = arr[i];
			j+=1;
			break;
		}
	}
	if (j == 0){
		printf ("Khong co gia tri duong trong mang");
	}else{
	for (int i =0 ; i < n ; i++){
		if (arr[i]>0 && arr[i]< min){
			min = arr[i];
		    }
	    }
	    printf ("\nMin :%d",min);
	}
	
	return 0;
}
	
	
	

