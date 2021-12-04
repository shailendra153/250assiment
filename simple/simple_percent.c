#include<stdio.h>
void percent(int a, int b, int c, int d, int e) {

    printf("Your Percentage is %.2f\n",(a+b+c+d+e)/5.0);

}
int main() {
    int hindi=50,english=50,physics=50,chemistry=50,maths=50;
    percent(hindi,english,physics,chemistry,maths);


    return 0;
}
