//A Trim leading white space characters from a given string.
#include<stdio.h>
#include <string.h>   
 
void trimleading(char *s)
{
	int i,j;
	for(i=0;s[i]==' '||s[i]=='\t';i++);
 
	for(j=0;s[i];i++)
	{
		s[j++]=s[i];
	}
	s[j]='\0';  
}
 
int main()
{
    char s[1000];  
    printf("Enter the string : ");
    gets(s);
    
	printf("Before trimming leading white spaces :%s",s);
	trimleading(s);
    printf("\nAfter trimming leading white spaces:%s",s);
return 0;
}
