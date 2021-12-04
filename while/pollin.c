#include<stdio.h>
	void pollin(int n){
		int i=n;
		int r,sum=0;
		while(i!=0){
		r=i%10;
		sum=sum*10+r;
		i=i/10;
                   } 
                     if(n==sum)      
                printf("The %d number is pollindrome\n",n);
                else
                  printf("The %d number is  not pollindrome\n",n);
          }
          int main(){
          pollin(12345);
          pollin(12321);	
          
          return 0;
          }
