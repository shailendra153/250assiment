// Area and circumference of a circle
#include<stdio.h>
void area(int a) {
    printf("Circumference of circle is %.2f\n",(2*22*a)/7.0);
    printf("Area of circle of radius %d is %.2f\n",a,(22*a*a)/7.0);

}
int main() {
    area(7);
    return 0;
}
