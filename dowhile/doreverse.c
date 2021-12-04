#include<stdio.h>
	void reverse(int n){
		int i=n;
		int r,sum=0;
		do{
		r=i%10;
		sum=sum*10+r;
		i=i/10;
                   }         
                printf("The Reverse of %d is %d\n",n,sum);
          }
          while(i!=0);
          int main(){
          reverse(12345);
          
          
          return 0;
          }
