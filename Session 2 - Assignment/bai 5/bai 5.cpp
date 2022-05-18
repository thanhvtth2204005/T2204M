#include<stdio.h>
int main (){
	int n;
	scanf("%d",&n);
	int i = 1;
	int s = 0;
	while (i<n){
		if (n % i == 0)
	    	s = s + i;
	    	i++;
	}
		if (s != n )
			 printf (" khong la so hoan hao");
		else 
	    	printf (" la so hoan hao");
}
