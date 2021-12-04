//divide by 5 and 11
#include<stdio.h>

void check(int n) {
    if(n%55==0)
        printf("%d is divide by 5 and 11",n);
    else
        printf("%d is not  divide by 5 and 11",n);
}
int main() {

    check(55);
    check(110);
    check(50);


    return 0;
}
