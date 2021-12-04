// factorial
#include<stdio.h>
void factorial(int a) {
    int r=1,i=a;
    while(i!=0) {
        r=r*i;
        i--;

    }
    printf("The Factorial of %d is %d\n",a,r);
}
int main() {
    factorial(5);

    return 0;
}
