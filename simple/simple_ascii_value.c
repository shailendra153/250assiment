//print ascii value of chatacter by function.
#include<stdio.h>
void ascii(char ch) {
    printf("The ASCII value of %c is %d",ch,ch);
}
int main() {
    char ch;
    printf("Enter a character: \n");
    scanf("%c",&ch);
    ascii(ch);


    return 0;
}