/* C Program to Check the given string is Palindrome or not */

#include <stdio.h>
#include <string.h>

void pollin(char str[])
{
    int i,len,flag;
    flag=0;
    len = strlen(str);
    for(i = 0; i < len; i++) {
        if(str[i] != str[len - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        printf("\n %s is a Palindrome String", str);
    }
    else
    {
        printf("\n %s is Not a Palindrome String", str);
    }
}
int main(){
char str[10];
printf("Enter a string\n");
gets(str);
pollin(str);
}
