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
	int j =0 ,s = 0,Smax = 0;;
		for (int i = 0 ; i < n ; i++){
			if (arr[i]>0 && arr[i+1]>0){
				s = arr[i]+arr[i+1];
				j+=1;
	    }			
	}
	if (j == 0){
		printf (" Khong co gia tri duong lien tiep canh nhau");
	}else{	
		for (int i = 0;i<j;i++){
			if (Smax < s){
				Smax = s;
			}
	    }
	}    
	    printf ("Smax = %d",Smax);
	    return 0;
		
}
