#include<stdio.h>
int main (){
	int n ;
	scanf ("%d",&n);
	int i = 0;
	int s = 0;
	while (i <=n){
		s = s + i;
		i++;
	}
	 printf ("s = %d",s);
}
