//Find the last occurrence of a character in a given string.
#include<stdio.h>
#include <string.h>
 
int check(char *s,char c)
{
    int i,k=0;
    for(i=strlen(s)-1;i>=0;i--)  
    {
    	if(s[i]==c)
    	{
		  k=1;
    	  break;
		}
 	}
   return i;
 	
	  
 }
int main()
{
 
    char s[1000],c;  
    int n;
 
    printf("Enter  the string : ");
    gets(s);
    printf("Enter character to be searched: ");
    c=getchar();
    n=check(s,c);
 
     
    if(n>-1)
 	    printf("character  %c  is last occurrence at location:%d ",c,n);
    else
        printf("character is not in the string ");
 
 	 
     
    return 0;
 
     
     
}
