#include<stdio.h>
#include<math.h>
int main (){
	int a , b , c ;
	float d , x1 , x2 , x;
	scanf ("%d%d%d", &a , &b , &c);
    if ( a == 0 && b == 0 && c == 0){
		printf ("phuong trinh co vo so nghiem");
	}
	if(a==0 && c !=0){
		if (b == 0){
			printf ("phuong trinh vo nghiem");
		}
		else {
			x = (float)-c/b;
			printf ("x = %f", x);
		}
	}
	if ( a!=0 && b !=0 && c !=0){
		d = (b*b) - 4*a*c; 
		if (d>0){
		x1 = (float)(-b + sqrt(d))/(2*a);
		x2 = (float)(-b - sqrt(d))/(2*a);
		printf ("x1 = %f\n",x1);
		printf ("x2 = %f",x2);
		}
		else if (d == 0){
			x = (float)-b/(2*a);
			printf ("x = %f",x);
		}
		else {
			printf("phuong trinh vo nghiem");
		}

	}
	return 0;
}

