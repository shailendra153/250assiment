#include<stdio.h>

void days(int i) {

    if(i==2)
        printf("28 0R 29 DAYS\n");
    else if(i==3||i==1||i==5||i==7||i==8||i==10||i==12)
        printf("31 DAYS\n");
    else if(i==4||i==6||i==9||i==11)
        printf("30 DAYS\n");
    else
        printf(" %d is INVALID MONTH\n",i);


}

int main()
{
    days(1);
    days(2);
    days(6);
    days(14);
    return 0;
}