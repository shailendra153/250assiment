#include<stdio.h>
int  posneg(int a) {
    if(a>0)
        printf("The %d number is positive\n",a);
    else if(a<0)
        printf("The %d number is negative\n",a);
    else
        printf("Number neither positive nor negtive");

}
int main() {
    posneg(5);
    posneg(-5);
    posneg(0);


    return 0;
}
