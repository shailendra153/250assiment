#include<stdio.h>
int great (int a, int b){
if(a>b)
return a;
else return b;
}
int main(){
int a=2,b=5,c=10,d;
d=great(a,b);

printf("The Greater Number Among %d , %d and %d is %d\n",a,b,c,great(d,c));

return 0 ;
}



