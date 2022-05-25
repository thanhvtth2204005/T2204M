#include<stdio.h>
int main(){
	int arr[100];
	int n ;
	 do{
 	printf ("Nhap n :\n");
	scanf("%d",&n);
	}
	while(n<=0);
	printf("Nhap mang :\n");
	for (int i = 0; i<n ; i++){
		scanf("%d",&arr[i]);
	}
	int max = 0,k=0,i=0;
	 for(i=0;i<n;i++){
	 	if (arr[i]>0){
	 		k++;  
		    if ( > max){
		   		makx =k;
		   }else
		  		k = 0;
		  }
		}
	 
	  printf ("\nMax : %d",max);
	  return 0;
	}	
