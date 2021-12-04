#include<stdio.h>
void name(char a[],char b[]) {

    printf("%c.",a[0]);
    printf("%s",b);

}
int main() {

    char a[10],b[10];
    printf("Enter Your name\n");
    gets(a);
    printf("Enter Your surname\n");
    gets(b);
    name(a,b);

    return 0;
}