#include<stdio.h>
	void count(int n){
		int i=n;
		int r, count=0;;
		while(i!=0){
		r=i%10;
		count++;
		i=i/10;
                   } 
                  printf("The number of digit in %d is %d\n",n,count);
          }
          int main(){
          count(12345);
          count(123);
          count(123456789);	
          
          return 0;
          }
