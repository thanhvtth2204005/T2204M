#include<stdio.h>
#include<math.h>
#include<algorithm>
int SNTlonHonMax(int n,int arr[]){
	int max =*std::max_element(arr,arr+n);
	int i = max;
	int snt;
	for (i; ;i++){
		int k = 0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				k++;
			}
		}
		if (k == 2){
			 snt = i;
			 break;
		}	
	}
	return snt;	
}

int main(){
	int z[5]={1,6,3,10,12};
	int snt = SNTlonHonMax(5,z);
	printf("So nguyen to la :%d\n",snt);
}