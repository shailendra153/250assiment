#include<stdio.h>
void check(char ch) {
    if(ch>='A'&& ch <='Z')
        printf("%c in UPPER CASE\n",ch);
    else if(ch>='a'&& ch <='z')
        printf("%c in LOWER CASE\n",ch);
    else
        printf("%c is not a ALPHABET\n",ch);
}
int main() {
    check('A');
    check('a');
    check('0');
    check('@');




    return 0;
}
