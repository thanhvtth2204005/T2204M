#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	int i = 1;
	int demuoc = 0;
	while (i<=n){
		if (n % i == 0)
	    	demuoc++;
	    	i++;
	}
		if (demuoc == 2 )
			printf (" la so nguyen to");
		else printf (" khong la so nguyen to");
}
