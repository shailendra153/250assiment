#include<stdio.h>
	void genericroot(int n){
		int r,sum=0,i=n;
		while(i!=0){
			r=i%10;
			sum=sum+r;
			i=i/10;
		
		}
	printf("The Generic Root of %d is %d\n",n,sum);
	
	
	}
	int main(){
	genericroot(12);
	genericroot(123);
	
	return 0;
	}
