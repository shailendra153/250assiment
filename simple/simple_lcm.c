// lcm of two numbers
#include<stdio.h>
void lcm(int a, int b) {
    int x,y;
    if(a>b) {
        x=a;
        y=b;
    }
    else {
        x=b;
        y=a;
    }
    for(int i=1; i<=y; i++) {
        if((i*x)%y==0) {
            printf("The lcm of %d and %d is %d\n",a,b,i*x);
            break;
        }

    }


}

int main() {
    lcm(10,30);
    lcm(15,45);


    return 0;
}
