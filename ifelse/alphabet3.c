#include<stdio.h>
void alpha(char a) {
    if(a>='A'&&a<='Z'||a>='a'&&a<='z')
        printf("%c is a ALPHABET\n",a);
    else
        printf("%c is NOT a ALPHABET\n",a);
}
int main() {
    alpha('A');
    alpha('1');

    return 0;
}
