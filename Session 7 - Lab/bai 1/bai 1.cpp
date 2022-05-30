#include<stdio.h>
#include<math.h>
#include<algorithm>
int Pow(int x,int y){
	int S =pow(x,y);
	return S;
}
int main(){
	int x , y;
	printf ("Nhap x :\n");
	scanf ("%d",&x);
	printf ("Nhap y :");
	scanf("%d",&y);
	int s = pow(x,y);
	printf (" S = %d",s);
}