#include<stdio.h>
void side(int a,int b,int c) {
    if(a<(b+c)&&b<(a+c)&&c<(a+b))
        printf("trianfle of side %d,%d and %d is valid",a,b,c);
    else
        printf("trianfle of side %d,%d and %d is not valid",a,b,c);

}
int main()
{
    int a=8;
    int b=8;
    int c=8;
    side(a,b,c);
    return 0;
}