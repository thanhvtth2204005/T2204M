#include<stdio.h>
int main()
{
  int n;
   scanf("%d", &n);
   int i = 1;
  float S = 0;
    while(i <= n)
  {
     S = S + (float)1/ i;  
      i++;
   }
    printf("Tong 1 + 1/2 + ... + 1/%d là: %.2f",n, S);
}
