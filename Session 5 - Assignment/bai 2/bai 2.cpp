#include<stdio.h>
#include<math.h>
int main(){
	int arr[100];
	int n;
	printf("Nhap n : \n");
	scanf("%d",&n);
	int x,min,max,gtgn ;
	printf ("Nhap x :\n");
	scanf ("%d",&x);
	printf("Nhap mang :\n");
		for (int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
		gtgn = 0;
		    for(int i =0 ; i<n ;i++){
				if (abs(arr[i]-x)<abs(gtgn-x)){
				gtgn = arr[i];
			}
		}
		printf("Gia tri gan %d nhat la :%d",x,gtgn);
}
