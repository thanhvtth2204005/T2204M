#include<stdio.h>
int timbcnn(int n1,int n2){
		if(n1 % n2 ==0){
			return n1;
	}
	  else if(n2 % n1 == 0){
			return n2;
	}else{
		int	bcnn = n1*n2;
			return bcnn;
	}
}
int main (){
	int n1,n2,bcnn1;
 	do {
 	printf (" Nhap n1 : ");
	scanf ("%d",&n1);
	printf (" Nhap n2 : ");
	scanf ("%d",&n2);
	}while (n1 == 0 || n2 ==0);
    bcnn1 = timbcnn(n1,n2);
    printf ("Boi chung nho nhat la: %d",bcnn1);
}