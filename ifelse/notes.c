#include<stdio.h>
void notes( int n) {
    if(n>=2000) {
        printf("notes of 2000=%d\n",n/2000);
        n=n%2000;
    }
    if(n>=500) {
        printf("notes of 500=%d\n",n/500);
        n=n%500;
    }
    if(n>=200) {
        printf("notes of 200=%d\n",n/200);
        n=n%200;
    }
    if(n>=100) {
        printf("notes of 100=%d\n",n/100);
        n=n%100;
    }
    if(n>=50) {
        printf("notes of 50=%d\n",n/50);
        n=n%50;
    }
    if(n>=20) {
        printf("notes of 20=%d\n",n/20);
        n=n%20;
    }
    if(n>=10) {
        printf("notes of 10=%d\n",n/10);
        n=n%10;
    }
    if(n>=5) {
        printf("notes of 5=%d\n",n/5);
        n=n%5;
    }
    if(n>=2) {
        printf("notes of 2=%d\n",n/2);
        n=n%5;
    }
    if(n>=1) {
        printf("notes of 5=%d\n",n);

    }


}
int main()
{
    int amount=555555123;
    notes(amount);


    return 0;
}