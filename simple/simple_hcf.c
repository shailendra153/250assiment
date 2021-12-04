#include<stdio.h>
void hcf(int a, int b) {
    int i,n;
    n=(a>b)?(a):(b);
    for (i=n; i>=1; i--) {
        if((a%i)==0&&(b%i)==0) {
            printf("The HCF of %d and %d is %d\n",a,b,i);
            break;
        }
    }
}
int main() {
    hcf (20,40);
    hcf(25,1000);
    return 0;
}
