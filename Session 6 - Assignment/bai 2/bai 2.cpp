#include<stdio.h>
int timucln(int n1,int n2){
	int ucln;
if (n1<n2){
		for (int i = 1; i<=n1;i++){
			if (n1 % i == 0 && n2 % i == 0){
				ucln = i;
			}
		}
	}else {
		for (int i = 1;i<=n2;i++){
			if (n1 % i == 0 && n2 % i == 0){
				ucln = i;
			}
		}
	}
	return ucln;
}
int main (){
	int n1,n2;
 	do {
 	printf (" Nhap n1 : ");
	scanf ("%d",&n1);
	printf (" Nhap n2 : ");
	scanf ("%d",&n2);
	}while (n1 == 0 || n2 ==0);
	int ucln1 = timucln(n1,n2);
		printf ("uoc chung lon nhat la : %d",ucln1);
}

