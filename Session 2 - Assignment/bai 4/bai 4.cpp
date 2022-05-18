#include<stdio.h>
int main(){
 int n,r;
 scanf ("%d",&n);
 int sdn = 0;
 while (n>0){
    r= n% 10;
 	sdn = sdn*10 +r ;
 	n = n / 10;
 }
    printf ("so dao nguoc la : %d", sdn);
 }
