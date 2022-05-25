#include<stdio.h>
#include<math.h>
int main(){
	int arr[100];
	int n;
	printf ("Nhap n:\n");
	scanf ("%d",&n);
	printf ("Nhap mang :\n");
	for (int i = 0; i<n;i++){
		scanf ("%d",&arr[i]);
	}
	int min , max , x ;
	max = arr[0];
	for ( int i=0;i<n;i++){
		if ( arr[i]>max){
			max = arr[i];
		}
	}
	min = arr[1];
	for (int i =0;i<n;i++){
		if (arr[i]<min){
			min = arr[i];
		}
	}
	if (abs(min)>abs(max)){
		x = abs(min);
		printf ("Gia tri cua x la : %d",x);
	}else{
		x = abs(max);
		printf("Gia tri cua x la :%d",x);
	}
	
}