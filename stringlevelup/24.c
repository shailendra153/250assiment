//Trim both leading and trailing white space characters from a given string.
#include<stdio.h>
#include <string.h>   
 
void trimtrailing(char *s)
{
	int i=strlen(s)-1;
	while(i>-1)
	{
	  if(s[i]==' '||s[i]=='\t')
	  i--;
	  else
	   break;
	}
	s[i+1]='\0';
}
 
int main()
{
    char s[1000];  
    printf("Enter the string : ");
    gets(s);
    
	printf("Before trimming trailing white spaces :'%s'",s);
	trimtrailing(s);
    printf("\nAfter trimming trailing white spaces:'%s'",s);
return 0;
}
