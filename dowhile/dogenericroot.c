#include<stdio.h>
	void genericroot(int n){
		int r,sum=0,i=n;
		do{
			r=i%10;
			sum=sum+r;
			i=i/10;
		
		}
	printf("The Generic Root of %d is %d\n",n,sum);
	
	
	}
	while(i!=0);
	int main(){
	genericroot(12);
	genericroot(123);
	
	return 0;
	}
