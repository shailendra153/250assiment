#include<stdio.h>
void check(char ch) {
    if(ch>='A'&& ch <='Z')
        printf("%c in UPPER CASE\n",ch);
    else if(ch>='a'&& ch <='z')
        printf("%c in LOWER CASE\n",ch);
    else if(ch>='0'&& ch <='9')
        printf("%c is DIGIT\n",ch);
    else
        printf("%c is special character\n",ch);
}
int main() {
    check('A');
    check('a');
    check('0');
    check('@');




    return 0;
}
