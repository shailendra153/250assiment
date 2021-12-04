// first three power
#include<stdio.h>
void power (int n) {
    printf("The Value of %d^1=%d\n", n,n);
    printf("The value of %d^2 =%d\n",n,n*n);
    printf("The Value of %d^3=%d\n\n",n,n*n*n);
}
int main() {
    power (5);

    return 0;
}
