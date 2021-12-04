#include<stdio.h>
#include<string.h>
int main()
{
    char s1[10],s2[10];  
    int i;
 
    printf("Enter any string: ");
    gets(s1);
    for(i=0;s1[i]!='\0';i++)  
    {
    	s2[i]=s1[i];
	}
	s2[i]='\0';
 
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'",s2);
 
 
    return 0;
}
