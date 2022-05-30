#include<iostream>
#include<math.h>
#include<algorithm>

int min(int n,int arr[]){
	int min = arr[0];
	for (int i = 0;i<n;i++){
		if (arr[i]<min){
			min = arr[i];
		}
	}
	return min;
}
int kiemtrauoc(int n,int arr[],int min){
    int ucln;
    for(int j=abs(min);j>0;j--){
        bool k=true;
        for(int i=0;i<n;i++){
            if(arr[i]==0){
                continue;
            }else{
                if(arr[i]%j!=0){
                    k=false;
                }
            }
        }
        if(k){
            ucln=j;
            break;
        }
    }
    return ucln;
}
int uclnArray(int n,int arr[]){
    int ucMax,gtrmin;
    int minarr=*std::min_element(arr,arr+n);
    if(minarr==0){
        gtrmin=min(n,arr);
        return kiemtrauoc(n,arr,gtrmin);
    }else if(minarr==1){
        return minarr;
    }else{
        return kiemtrauoc(n,arr,minarr);
    }
}
int main(){
//	int z[5]={-6,0,8,-2,4};
	int z[5]={0,0,0,0,0};
	if (uclnArray(5,z)==0){
		printf (" Mang k co uoc chung ");
	}else {
		printf (" uoc chung lon nhat cua mang la : %d",uclnArray(5,z));
	}
	    	
}