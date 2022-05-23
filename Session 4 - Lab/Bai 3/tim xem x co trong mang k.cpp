#include<stdio.h>
int main(){
	int arr[100];
	int n ,x;
	int a = 0;
	printf ("Nhap n :\n");
	scanf ("%d%d",&n,&x);
	printf ("Nhap mang :\n");
	for (int i = 0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for (int i = 0; i<n;i++){
		if (i==x){
			a = a + 1;
		}
	}
		if(a == 1){
		    printf (" %d co trong mang",x);
		}else{
		    printf (" %d k co trong mang",x);
    	}
	return 0;

}
