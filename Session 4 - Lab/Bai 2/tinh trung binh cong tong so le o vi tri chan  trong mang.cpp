#include<stdio.h>
int main(){
	int arr[100];
	int s1 = 0, j =0;
	int n ,i;
	float s;
	printf ("Nhap n :\n");
	scanf ("%d",&n);
	printf ("Nhap mang :\n");
	for ( i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for ( i=0;i<n;i++){
		if (arr[i]%2==1 && i%2 == 0){
			s1 = s1 + arr[i];
			j = j+1;
		}
	}
	s =s1/(float)j;
	printf("s = %.2f",s);
	return 0;
}
