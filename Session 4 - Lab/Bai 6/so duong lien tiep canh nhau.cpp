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
	int max = 0;
	int k =0;
		for (int i = 0 ; i < n ; i++){
			if (arr[i]>0 && arr[i+1]>0){
				k+=1;
			}
		}
		if ( k == 0){
			printf (" Khong co so duong canh nhau trong mang");
		}else {
		for (int i =0;i<k;i++){
			   if (max < k ){
			   	  max = k;
			   }
	    	}
	    	printf ("\nSo luong so duong lien tiep nhieu nhat la : %d",max);
		}
	}
