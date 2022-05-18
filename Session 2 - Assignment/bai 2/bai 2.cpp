#include<stdio.h>
#include<math.h>
int main (){
	int n;
	printf ("nhap n :");
	scanf ("%d", &n);
	int i = 1 ;
	int max ;
	while ( i < n){
		if (i % 2 == 0 && i % 3 == 0){
			max = i;
		}
		i++;
	}
	printf (" max = %d",max);
}
