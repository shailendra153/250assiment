#include<stdio.h>
#include <stdio.h>



int main()
{
    char str[10];
    int i;

    printf("Enter your text : ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
  
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("lowercase string : %s",str);
    return 0;
}
