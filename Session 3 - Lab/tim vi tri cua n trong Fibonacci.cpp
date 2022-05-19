#include<stdio.h>
int main (){
	int n , x;
	scanf("%d",&n);
	int x1 = 1 ,x2 = 1;
	if (n== 1 || n == 2){
		printf ("vi tri cua %d trong day Fibonacci = 1\n",n);
	}
	
		for (int i = 3;i<=n;i++){
		x = x1 + x2;
		x1= x2;
		x2=x;
	}
	printf ("vi tri cua %d trong day Fibonacci = %d",n,x);
	
}
