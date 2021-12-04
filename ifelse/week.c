#include<stdio.h>

void week(int n) {
    if(n==1)
        printf("MONDAY\n");
    if(n==2)
        printf("TUESDAY\n");
    if(n==3)
        printf("WEDNESDAY\n");
    if(n==4)
        printf("THURSDAY\n");
    if(n==5)
        printf("FRIDAY\n");
    if(n==6)
        printf("SATURDAY\n");
    if(n==7)
        printf("SUNDAY\n");
    if(n==0||n>7)
        printf("%d isinvalid number\n",n);


}


int main()
{
    week(0);
    week(1);
    week(7);
    week(8);

    return 0;
}