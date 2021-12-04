#include<stdio.h>
int great (int a, int b){
if(a>b)
return a;
else return b;
}
int main(){
int a=2,b=5;


printf("The Greater Number between %d and %d is %d\n",a,b,great(a,b));
printf("The lowest Number between %d and %d is %d\n",a,b,a+b-great(a,b));

return 0 ;
}



