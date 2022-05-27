#include<stdio.h>
int tinhtong(int n){
	int  sum ,r;
	while (n !=0){
		r = n % 10;
		sum = sum + r;
		n = n/10;
	}
	return sum;
}
int main (){
	int x;
	printf ("Nhap x: ");
	scanf ("%d",&x);
	int tong = tinhtong(x);
	printf ("Tong cac chu so la: %d",tong);
}