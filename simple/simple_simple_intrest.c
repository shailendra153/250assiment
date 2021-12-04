#include<stdio.h>
float si(int a, int b, int c) {
    float simple;
    simple=(a*b*c)/100.0;
    return simple;
}
int main() {
    int p=1000;
    int r=5;
    int t =1;
    printf("SImple Intrest is %.2f\n",si(p,r,t));

}
