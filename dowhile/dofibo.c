	
/* Fibonacci Series using while loop */
// 0 1 1 2 3 5 8 13...
#include<stdio.h>
int fibo(int n)
{
    int i,a,b,c;
    i=1;
    a=0;
    b=1;
   do
    {
        printf("%d ",a);
        c = a + b;
        a = b;
        b = c;
        i++;
    }
     while(i<=n);
     printf("\n");
    return 0;
}
int main(){
fibo(5);
fibo(10);


return 0;
}

