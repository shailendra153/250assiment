// check leap year
#include<stdio.h>
void leapyear(int year) {
    if(year%400==0)
        printf("%d is a LEAP YEAR\n",year);
    else if(year%100==0)
        printf("%d is not a LEAP YEAR\n",year);
    else if(year%4==0)
        printf("%d is a LEAP YEAR\n",year);
    else
        printf("%d is not a LEAP YEAR\n",year );
}
int main() {
    leapyear(2000);
    leapyear(2001);
    leapyear(2002);
    leapyear(2003);
    leapyear(2004);

    return 0;
}
