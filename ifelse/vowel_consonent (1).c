#include<stdio.h>
void alpha(char a) {
    if(a>='A'&&a<='Z'||a>='a'&&a<='z') {
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U'||a=='a'||a=='e'||a=='i'||a=='o'||a=='u')
            printf("%c is VOVEL\n",a);
        else
            printf("%c is CONSONANT\n",a);



    }

    else
        printf("%c is NOT a ALPHABET\n",a);
}
int main() {
    alpha('A');
    alpha('z');
    alpha('1');

    return 0;
}
