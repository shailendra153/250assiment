#include<stdio.h>
void area (int a,int b) {

    printf("The area or triangle is %.1f",0.5*a*b);

}
int main()
{
    int a,b;
    printf("Enter height of triangle\n");
    scanf("%d",&a);
    printf("Enter base of triangle\n");
    scanf("%d",&b);
    area(a,b);
    return 0;
}