#include<stdio.h>
#include<math.h>
int main(){
	int arr[100];
	int n;
	printf("Nhap n : \n");
	scanf("%d",&n);
	int x ;
	printf ("Nhap x :\n");
	scanf ("%d",&x);
	printf("Nhap mang :\n");
	for (int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int min,max,s1,s2;
	min = arr[0];
		for (int i=0;i<n;i++){
			if (arr[i]<arr[0]){
				min = arr[i];
			}
	}
	max = arr[1];
		for (int i =0;i<n;i++){
			if (arr[i]> arr[1]){
				max = arr[i];
			}
	}
		s1 = abs(min-x);
		s2 = abs(max-x);
		if ( s1 == s2){
			printf ("Gia tri xa %d trong mang la : %d,%d",x,max,min);
		}
			else if ( s1 < s2){
					printf("Gia tri xa %d trong mang la : %d",x,max);
				}else{
					printf("Gia tri xa %d trong mang la : %d",x,min);
	}
}
