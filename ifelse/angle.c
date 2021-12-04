#include<stdio.h>

int angle(int a,int b,int c) {
    if((a+b+c)==180)
        printf("ANGLE OF %d,%d and %d is VAILD TRIANGLE",a,b,c);
    else
        printf("ANGLE OF %d,%d and %d is  not VAILD TRIANGLE",a,b,c);



}
int main()
{
    int a=90;
    int b=45;
    int c=45;

    angle(a,b,c);
    return 0;
}