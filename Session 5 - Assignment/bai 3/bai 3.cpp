#include<stdio.h>
#include<math.h>
int main(){
	int arr[100];
	int n;
	printf("Nhap n : \n");
	scanf("%d",&n);
	int min,max,s;
	printf("Nhap mang :\n");
	for (int i =0;i<n;i++){
		scanf("%d",&arr[i]);
	}
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
        s = abs (max-min);
	printf ("Doan chua tat ca cac phan tu trong mang la :%d,%d\n va co gia tri la :%d",min,max,s);
}
