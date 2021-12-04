#include<stdio.h>
void triangle(int a,int b,int c) {

    if(a==b&&b==c)
        printf(" equilateral triangle\n");
    else if (a==b||a==c||b==c)
        printf("isosceles triangle\n");
    else
        printf("scelene triangle\n");
}
int main()
{
    triangle(20,20,20);
    triangle(18,20,20);
    triangle(19,20,21);
    return 0;
}