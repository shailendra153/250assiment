#include<stdio.h>
#include <stdio.h>
 
void main()
{
    char string[50];
    int i, length = 0;
 
    printf("Enter a string \n");
    gets(string);
   
    for (i = 0; string[i] != '\0'; i++)
    {
        length++;
    }
   
    printf(" the length of  strung is %s\n = %d\n", string, length);
}
